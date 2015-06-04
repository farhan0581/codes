#include<iostream>
#include<stdlib.h>
using namespace std;
class multi
{
	private:
		int a,b;
	public:
		void add();
		void mult();
		void sub();
		void div();
		void mod();
		void read(int x,int y)
		{
			a=x;
			b=y;
		}
		
};
inline void multi::add()
{
	cout<<"the sum is-->"<<a+b<<endl;
}
inline void multi::sub()
{
	cout<<"the diff is-->"<<a-b<<endl;
}
inline void multi::mult()
{
	cout<<"the product is-->"<<a*b<<endl;
}
inline void multi::div()
{
	cout<<"the qoutient is-->"<<a/b<<endl;
}
inline void multi::mod()
{
	cout<<"the remainder is-->"<<a%b<<endl;
}
int main()
{
	class multi o1,o2;
	int choice,l,m;
	cout<<"enter choice\n1.add 2.sub 3.multiplty 4.divide 5.modulus 6.exit\n";
	
	while(1)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"enter two numbers\n";
					cin>>m>>l;
					o1.read(m,l);
					o1.add();
					break;
				}
				case 2:
				{
					cout<<"enter two numbers\n";
					cin>>m>>l;
					o1.read(m,l);
					o1.sub();
					break;
				}
				case 3:
				{
					cout<<"enter two numbers\n";
					cin>>m>>l;
					o1.read(m,l);
					o1.mult();
					break;
				}
				case 4:
				{
					cout<<"enter two numbers\n";
					cin>>m>>l;
					o1.read(m,l);
					o1.div();
					break;
				}
				case 5:
				{
					cout<<"enter two numbers\n";
					cin>>m>>l;
					o1.read(m,l);
					o1.mod();
					break;
				}
				case 6:
				{
					exit(0);
					break;
				}
		}
	}
	return 0;
}
