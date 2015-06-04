#include<iostream>
using namespace std;
class farhan
{
	private:
		int i,j;
	public:
		farhan(int x,int y)
		{
			i=x;j=y;
		}
		farhan()
		{
			i=0;j=0;
		}
		farhan(farhan &obj)
		{
			i=obj.i;
			j=obj.j;
		}
		void show()
		{
			cout<<i<<" gap "<<j;
		}
		
};
int main()
{
	class farhan d1(3,4),d3(d1),d2;
	d1.show();
	farhan d2=d1;
	d2=d1;
	d2.show();
	d3.show();
	return 0;
}
