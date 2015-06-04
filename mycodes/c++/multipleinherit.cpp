#include<iostream>
using namespace std;
class A
{
	private:
		int x;
	protected:
		int a,b;
	public:
		A()
		{
			cout<<"cons of A called\n";
		}
		int func()
		{
			cout<<"enter a\n";
			cin>>a;
			return a;
		}
};
class B
{
	protected:
		int c;
	public:
		B(int x)
		{
			c=x;
			cout<<x;
		}
		B()
		{
			cout<<"const of B called\n";
		}
		int func()
		{
			cout<<"in B";
		}
};
class C:public B,public A
{
	private:
		int p,q;
	public:
		C()
		{
			cout<<"const of c called\n";
		}
		C(int a,int b):B(a)
		{
			p=a;q=b;
		}
		void func3()
		{
			cout<<B::func();
		}
};
int main()
{
	class C obj(3,2);
	int u;
	//obj.func3();
	u=obj.A::func();
	cout<<u;
	return 0;
}
