import socket
import os

# Get your own local IP
hostname = socket.gethostname()
local_ip = socket.gethostbyname(hostname)
print(f"Your IP Address: {local_ip}")

# Scan the network using ping (Linux/Mac)
network_prefix = ".".join(local_ip.split(".")[:3])  # Get the network range (e.g., 192.168.1.x)
print("Scanning for connected devices...\n")

for i in range(1, 255):  # Scan IPs from 1 to 254
    ip = f"{network_prefix}.{i}"
    response = os.system(f"ping -c 1 -W 1 {ip} > /dev/null 2>&1")  # Suppress output

    if response == 0:
        print(f"Device found: {ip}")

print("\nScan complete.")
