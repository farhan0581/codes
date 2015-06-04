#include<iostream>
#include<stdlib.h>
using namespace std;
int b[100];
int *reverse1(int a,int n)
{
	int i=0;
	while(a>0)
	{
		b[i]=a%10;
		a=a/10;
		i++;
	}
	return b;
}
void reverse2(int a,int n)
{
	int b[100],i;
	while(a>0)
	{
		b[i]=a%10;
		a=a/10;
		cout<<b[i];
		i++;
	}
}
int main()
{
	int nu,size,choice,*t,i;
	cout<<"enter the number & size\n";
	cin>>nu>>size;
	while(1)
	{
	
	cout<<"1.return type\n2.without return\n";
	cin>>choice;
		switch(choice)
		{
			case 1:
				{
					t=reverse1(nu,size);
					for(i=0;i<size;i++)
					cout<<*(t+i);
					break;
				}
				
			case 2:
				{
					reverse2(nu,size);
					break;
				}
			case 3:
				{
					exit(0);
				}
				
		}
	}
	return 0;
}
