#include<iostream>
using namespace std;
class basec
{
	protected:
		float real,imag;
	public:
		basec()
		{
			cout<<"enter the real and imaginary parts in base class\n";
			cin>>real>>imag;
		}
		basec(float a,float b)
		{
			cout<<"in bases para\n";
			real=a;imag=b;
		}
		void getcomplex()
		{
			cout<<"enter the real and imaginary parts\n";
			cin>>real>>imag;
		}
		void fal()
		{
			cout<<"hello";
		}
};
class derivedc:public basec
{
	protected:
		float r,i;
	public:
		derivedc()
		{
			r=0;i=0;
		}
		derivedc(float a,float b,float c,float d):basec(c,d)
		{
			r=a;i=b;
		}
		void addcomplex()
		{
			cout<<"the added complex number is->"<<r+real<<"+"<<i+imag<<"i"<<endl;
			basec::fal();
		}
		friend class sub;
		
};
class sub
{
	public:
		void subtract(derivedc obj)
		{
			cout<<"the difference between complex numbers is->"<<obj.real-obj.r<<"+"<<obj.imag-obj.i<<"i"<<endl;
		}
};
int main()
{
	derivedc d1(1,2,10,20);
	sub s1;
	d1.addcomplex();
	s1.subtract(d1);
	return 0;
	
}
