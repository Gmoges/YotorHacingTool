import socket
import os
import subprocess

# Get local IP address (works on Termux, Linux, and macOS)
def get_local_ip():
    try:
        # Method 1: Standard socket method
        local_ip = socket.gethostbyname(socket.gethostname())
        
        # Check if the IP is loopback (127.x.x.x), which means it's not correct
        if local_ip.startswith("127."):
            raise ValueError("Loopback address detected")
    except:
        # Method 2: Use ifconfig (for Termux/macOS/Linux)
        local_ip = subprocess.getoutput("ifconfig wlan0 | grep 'inet ' | awk '{print $2}'").strip()
    
    # Final check
    if local_ip.startswith("127.") or not local_ip:
        print("Error: Could not detect correct local IP. Are you connected to WiFi?")
        exit()
    
    return local_ip

# Get network prefix (first 3 parts of the IP)
local_ip = get_local_ip()
network_prefix = ".".join(local_ip.split(".")[:3])  # Example: 192.168.1

print(f"✅ Your IP Address: {local_ip}")
print(f"🔎 Scanning for devices on {network_prefix}.x network...\n")

# Scan for devices in the network
for i in range(1, 255):  # Scan IPs from .1 to .254
    ip = f"{network_prefix}.{i}"
    response = os.system(f"ping -c 1 -W 1 {ip} > /dev/null 2>&1")  # Suppress output

    if response == 0:
        print(f"📡 Device found: {ip}")

print("\n✅ Scan complete.")

