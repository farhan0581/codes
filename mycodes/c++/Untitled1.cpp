#include<iostream>
using namespace std;
class A
{
	public:
		~A()
		{
			cout<<"dest called\n";
		}
		A()
		{
			cout<<"con called\n";
		}
};
int main()
{
	class A obj;
	A();
	cout<<"hello\n";
	obj.~A();
	return 0;
}
