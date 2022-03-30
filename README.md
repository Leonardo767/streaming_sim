# Summary


# Motivation
Further my personal understanding in:
- networking 
- multithreading
- checksum authentication

Build a basic platform where I can test out different networking concepts. While limited, this platform is unique in that I understand every component from the get-go.

# Problem Definition
Build a streaming service from one server. Multiple clients can connect and disconnect to it at will.

Design clients and server that can account for:
- corrupted packets
- jitter (resulting in out of order packets)
- differing throughput
- differing latency
- impersonation of server

Build a display that shows the simulation user the following info:
- statistics per client
- environmental factors
- cummulative performance
- user input (i.e. cut off connection, add clients, change throughput, etc.)