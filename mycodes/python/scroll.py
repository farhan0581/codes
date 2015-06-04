from Tkinter import *
from tkFileDialog   import askopenfilename
import socket

info=''
def getinfo():
    global info
    info=v.get()
    info=info+'\n'
    T.insert(END, info)

def callback():
    name= askopenfilename()
    print (name)

def startclient():
    port=8000
    host=z.get()
    s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    s.bind((host,port))
    msg='client started'

root = Tk().geometry("500x500")
v=StringVar()
z=StringVar()
tframe=Frame(root)
tframe.pack(side=TOP,pady=10)
labelcl=Label(tframe,text="enter the HOST..")
labelcl.pack()
clport=Entry(tframe,textvariable=z)
clport.pack()
serverbtn=Button(tframe,text="Start Client..",fg="red",command=startclient)
serverbtn.pack(pady=10)
textbtn=Button(tframe,text="Choose text..",fg="white",bg="red",command=callback)
imagebtn=Button(tframe,text="Choose image..",fg="white",bg="green",command=callback)
videobtn=Button(tframe,text="Choose video..",fg="white",bg="black",command=callback)
sendbtn=Button(tframe,text="Send...",fg="black")
textbtn.pack(side=LEFT,padx=5)
videobtn.pack(side=LEFT,padx=5)
imagebtn.pack(side=LEFT,padx=5)
sendbtn.pack(side=RIGHT)
frame=Frame(root)
frame.pack()
label=Label(frame,text="You have entered this....")
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
tlabel=Label(bframe,text="Enter your text here...")
tlabel.pack()
textfield=Entry(bframe,width=70,textvariable=v,justify=LEFT)
textfield.pack(side=LEFT)
sendbtn=Button(bframe,text="Send",command=getinfo)
sendbtn.pack(side=LEFT)

mainloop()