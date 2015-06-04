#include<iostream>
#include<cmath>
using namespace std;
class oned
{
protected:
	float x1,x2,d1;
public:
	void area()
	{
		cout<<"enter the points in one D\n";
		cin>>x1>>x2;
		d1=abs(x1-x2);
		d1=d1*d1;
	}
	
};
class twod:public oned
{
	protected:
		float y1,y2,d2;
	public:
		void area()
		{
			oned::area();
			cout<<"enter the points in two D\n";
			cin>>y1>>y2;
			d2=abs(y1-y2);
			d2=d2*d2;
		}
};
class threed:public twod
{
	protected:
		float z1,z2,d3,total;
	public:
		void area()
		{
			twod::area();
			cout<<"enter the points in three d\n";
			cin>>z1>>z2;
			d3=abs(z1-z2);
			d3=d3*d3;
			total=pow((d1+d2+d3),0.5);
			cout<<"the distance is calculated to be "<<total<<endl;
		}
};
int main()
{
	class threed obj1;
	obj1.area();
	return 0;
}
