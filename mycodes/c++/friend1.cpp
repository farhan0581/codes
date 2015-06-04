#include<iostream>
using namespace std;
class friendfunc2;
class friendfunc1
{
	private:
		int a,b,c;
	public:
		friendfunc1(int x,int y,int z)
		{
			a=x;b=y;c=z;
		}
		friendfunc1()
		{
			a=0;b=0;c=0;
		}
		void show()
		{
			cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
		}
		friend void add(friendfunc1 p,friendfunc2 q);
};
class friendfunc2
{
	private:
		int s,t;
	public:
		friendfunc2(int x,int y)
		{
			s=x;t=y;
		}
		friendfunc2()
		{
			s=0;t=0;
		}
		void show()
		{
			cout<<"s="<<s<<"t="<<t<<endl;
		}
		friend void add(friendfunc1 p,friendfunc2 q);
};
void add(friendfunc1 p,friendfunc2 q)
{
	int sum=0;
	sum=p.a+p.b+p.c+q.s+q.t;
	cout<<"sum="<<sum<<endl;
}
int main()
{
	friendfunc1 obj1(10,25,78),obj2,obj3(0,47,45);
	friendfunc2 obj11(12,4),obj12;
	cout<<"objects of class 1\n";
	obj1.show();
	obj2.show();
	obj3.show();
	cout<<"objects of class 2\n";
	obj11.show();obj12.show();
	cout<<"adding obj1 and obj11\n";
	add(obj1,obj11);
	return 0;
}
