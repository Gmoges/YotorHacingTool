import random
import time
import sys
from colorama import Fore, Style, init

# Initialize colorama
init()

try:
    while True:
        output = []
        
        for _ in range(30):  
            if random.randint(1, 50) == 1:  # Random chance to insert "YOTOR"
                output.append(Fore.GREEN + "YOTOR" + Fore.RED)  # Ensure red continues after "YOTOR"
            else:
                output.append(str(random.randint(0, 9)))  # Numbers stay red
        
        sys.stdout.write(Fore.RED + " ".join(output) + Style.RESET_ALL + "\n")  # Everything starts as red
        sys.stdout.flush()
        time.sleep(0.1)  # Adjust speed for faster or slower effect
except KeyboardInterrupt:
    print("\nExited.")
