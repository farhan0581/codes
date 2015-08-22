/* basic file handling in c++ */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	ifstream f;
	char ch,arr[10];
	int row=0,col=0,flag=0;;
	f.open("abc.txt",ios::in);
	/*
		out:writing
		ate:goto end at opening
		app:append ,writes at the end
		binary:opens in binary mode
	*/
	f>>resetiosflags(ios::skipws);//for newline and whitespaces
	if(!f)
	{
		cout<<"sorry file does not exsit\n";
	}
	while(f)
	{
		f>>ch;
		if(ch==' ' && flag==0)
			col++;
		if(ch=='\n')
			{
				row++;
				flag=1;
			}

	}
		cout<<"rows="<<row+1<<endl<<"col="<<col+1<<endl;

	/* For sequential access use tell(returns current position of pointer)
	 and seek (moves file pointer to the specified location)
	with flags beg:beginning,cur:current,end:at the end
	append=p->out,g->in */

	f.clear();
	/*The problem is that the eof bit gets set after the first loop, 
	and any file operations on the stream will now fail.
	 we have to clear the bit by calling the aptly named clear member.*/

	cout<<"current position="<<f.tellg()<<endl;
	f.seekg(10,ios::beg);
	cout<<"current position="<<f.tellg()<<endl;
	while(f)
	{
		f>>ch;
		cout<<ch;
	}	
	f.clear();
	f.seekg(0);
	//reading lines
	cout<<"once again\n";
	while(f)
	{
		f.getline(arr,10);
		cout<<arr<<endl;
	}
	f.close();	
	return 0;
}