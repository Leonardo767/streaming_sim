# Summary
A streaming service from one server to multiple clients that can connect and disconnect to it at will. Server is delivering content it receives in real-time by arbitrary publisher (total content in this repo's sample.txt - the first two chapters from the Christian KJV Bible). Each active client maintains a comms channel where packets arrive at differing latencies, not necessarily in order.

# Motivation
Further my personal understanding in:
- networking 
- multithreading

Build a basic platform where I can test out different networking concepts. While limited, this platform is unique in that I understand every component from the get-go.

# Problem Definition
Build a streaming service from one server. Multiple clients can connect and disconnect to it at will. Server is delivering content it receives in real time by sim (for example, the Olympic Games).

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