#include<iostream>
using namespace std;
class farhan
{
	private:
		int a,b,sum;
		static int count;
		
	protected:
		
	public:
		~farhan()
		{
			cout<<"finished ";
		}
		farhan(int x=0,int y=0)
		{
			a=x;b=y;
			count++;
			cout<<"count="<<count;
		}
	    static int z;
		
//		farhan()
//		{
//			a=0;b=0;
//		}
		void func(farhan *p,farhan *q)
		{
			p->a=100;
			sum=p->a+q->a;
			cout<<"sum="<<sum<<endl;
		}
		void display()
		{
			cout<<"values are-"<<a<<" "<<b;
		}
};
int farhan::count=0;
int farhan::z=10;
int main()
{
	farhan f1(2,3),f2(5,8),f3;
	f1.func(&f1,&f2);
	f1.display();
	f3=f1;
	farhan f4=f3;
	f3.display();
	f4.display(); 
//	cout<< z;
	return 0;
}
