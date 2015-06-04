#include<iostream>
using namespace std;
class companvar2
{
	private:
		 int var1,var2;
	public:
		companvar2(int a,int b=0)
		{
			var1=a;var2=b;
		}
		companvar2()
		{
			var1=0;var2=0;
		}
//		companvar2(int a,int b=0)
//		{
//			var1=a;
//		}
		companvar2 operator + (companvar2 c)
		{
			companvar2 t;
			t.var1=var1+c.var1;
			t.var2=var2+c.var2;
			return t;
		} 	
		companvar2 operator - (companvar2 c)
		{
			companvar2 t;
			t.var1=var1-c.var1;
			t.var2=var2-c.var2;
			return t;
		} 	
		void print()
		{
			cout<<"var1="<<var1<<"var2="<<var2<<endl;
		}
		
};
int main()
{
	companvar2 obj1,obj2(1,2),obj3(14);
	obj1.print();
	obj2.print();
	obj3.print();
	cout<<"--------overloaded + \n";
	obj1=obj2+obj3;
	obj1.print();
	cout<<"---------overloaded - \n";
	obj2=obj1-obj3;
	obj2.print();
	return 0;
}
