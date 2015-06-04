#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[100],*t;
	static int a[5],i;
	cout<<"enter string\n";
	gets(arr);
	t=arr;
	for(i=0;*(t+i)!='\0';i++)
	{
		if(*(t+i)=='a'||*(t+i)=='A')
		{
			a[0]+=1;
		}
		if(*(t+i)=='e'||*(t+i)=='E')
		{
			a[1]+=1;
		}
		if(*(t+i)=='i'||*(t+i)=='I')
		{
			a[2]+=1;
		}
		if(*(t+i)=='o'||*(t+i)=='O')
		{
			a[3]+=1;
		}
		if(*(t+i)=='u'||*(t+i)=='U')
		{
			a[4]+=1;
		}
//		if(*(t+i)==' ')
//		i++;
	}
	cout<<"the vowels present are--a e i o u(in order) \n";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
