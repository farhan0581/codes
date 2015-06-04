#include<iostream>
using namespace std;
class big
{
	private:
		int a,b;
	public:
		int c;
		big(int x,int y)
		{
			a=x;b=y;
		}
		void sum()
		{
			cout<<a+b;
		}
		
};
int main()
{
	big obj(3,5);
	obj.sum();
	
	return 0;
}
