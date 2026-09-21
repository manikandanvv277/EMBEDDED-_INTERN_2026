import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

sock.bind(("0.0.0.0", 5005))

print("Waiting for UDP packets...")

while True:
    data, address = sock.recvfrom(1024)
    
    print("Received:", data.decode())
    print("From:", address)