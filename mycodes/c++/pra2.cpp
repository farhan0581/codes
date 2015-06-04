#include<iostream>
using namespace std;
class base
{
	private:
		int a,b;
	public:
		base()
		{
			a=0;b=0;
		}
		base(int p,int q)
		{
			a=p;b=q;
		}
		friend base operator +(base b1,base b2)
		{
			base temp;
			temp.a=b1.a+b2.a;
			temp.b=b1.b+b2.b;
			return temp;
		}
		void show()
		{
			cout<<a<<b;
		}
};
int main()
{
	class base obj(3,2),obj1(5,8),obj3;
	obj3=obj1+obj;
	obj3.show();
	return 0;
	
}
