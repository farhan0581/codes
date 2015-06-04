#include<iostream>
using namespace std;
class a
{
	private:
		int a1;
		void funcp()
		{
			cout<<"private\n";
		}
	protected:
		int b1;
		void func2()
		{
			a1=10265;
			cout<<"protected\n";
			cout<<a1;
		}
	public:
		void func()
		{
			cout<<"func accessed\n";
		}
};
class b:public a
{
	public:
		void func3()
		{
			b1=10;
			a1=10;
			cout<<b1;
			func2();
		}
};
int main()
{
	class b obj;
	class a obj1;
	//obj1.func();
	obj1.func();
	//cout<<b1;
	return 0;
}
