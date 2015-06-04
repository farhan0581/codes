import socket
import sys

sock 	=	socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s=sys.argv[1]
print s
server_addr	=	(s,8000)
#server_addr	=	('localhost',8000)
print >> sys.stderr,'starting up on %s port %s'%server_addr

sock.bind(server_addr)
sock.listen(1)
while True:
	print >> sys.stderr,'waiting for connection'
	connection , client	=	sock.accept()
	try:
		print >>sys.stderr, 'connection from', client
		while True:
			data 	=	connection.recv(1024)
			print >> sys.stderr,'received data= %s'%data
			if data:
				print type(data)
				i_0=0
				i_1=0
				for i in range(len(data)):
					if data[i]=='0':
						i_0=i_0+1
					elif data[i]=='1':
						i_1=i_1+1
				print >>sys.stderr, 'sending data back to the client'
				connection.sendall('No of 0s = %d and 1s = %d'%(i_0,i_1))
			else:
				connection.sendall('Nothing received bye bye')
				break

	finally:
		connection.close()
# else:
#                 print >>sys.stderr, 'no more data from', client_address
#                 break