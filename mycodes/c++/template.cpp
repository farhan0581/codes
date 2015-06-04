#include<iostream>
#include<string.h>
using namespace std;
template <class T>
void min(T &a,T &b)
{
	if(a<=b)
	cout<<"the min of the two is "<<a<<endl;
	else
	cout<<"the min of the two is "<<b<<endl;
	
}
void min(char *x,char *y)
{
	if(strcmp(x,y)>0)
	cout<<"the min string is "<<y<<endl;
	else
	cout<<"the min string is "<<x<<endl;	
}
int main()
{
	int a,b;
	float c,d;
	char p[20],q[20];
	cout<<"enter the two integer values\n";
	cin>>a>>b;
	min(a,b);
	cout<<"enter the two float values\n";
	cin>>c>>d;
	min(c,d);
	cout<<"enter the two strings\n";\
	cin>>p>>q;
	min(p,q);
	return 0;
}
