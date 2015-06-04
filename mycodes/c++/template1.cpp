#include<iostream>
using namespace std;
template <class T>
class paired
{
	private:
		T a,b;
	public:
		paired()
		{
			a=0;
			b=0;
		}
		paired(T x,T y)
		{
			a=x;b=y;
		}
		void getmax()
		{
			if(a>b)
			cout<<"a is greater than b by";
			else
			cout<<"b is greater than a by "<<b-a;
		}	
};
int main()
{
	paired <float> p1(1.54564,2.56);
	p1.getmax();
	return 0;
}
