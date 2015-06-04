from Tkinter import *
import socket

info=''
path='nopath'
def getinfo():
    global info
    info=v.get()
    info=info+'\n'
    T.insert(END, info)

def startserver():
    host=v.get()
    port=8000
    s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    s.bind((host,port))
    msg = 'server started!!!'
    s.listen(5)
    smsg=Label(tframe,text=msg)
    smsg.pack(side=BOTTOM)



root = Tk().geometry("500x500")
v=StringVar()
tframe=Frame(root)
tframe.pack(side=TOP,pady=10)
la=Label(tframe,text="Enter HOST!!")
la.pack()
gethost=Entry(tframe,textvariable=v)
gethost.pack()

serverbtn=Button(tframe,text="Start Server..",fg="red",command=startserver)
serverbtn.pack(pady=10)

frame=Frame(root)
frame.pack()
label=Label(frame,text="The sender have send this....")
label.pack(side=TOP,pady=20)
S = Scrollbar(frame)
T = Text(frame, height=10, width=50)
S.pack(side=RIGHT,fill=Y)
T.pack(side=LEFT)
S.config(command=T.yview)
T.config(yscrollcommand=S.set)
# T.insert(END, info)
bframe=Frame(root)
bframe.pack(side=BOTTOM)
tlabel=Label(bframe,text="File received successfully with path="+path,pady=30)
tlabel.pack()


mainloop(  )

