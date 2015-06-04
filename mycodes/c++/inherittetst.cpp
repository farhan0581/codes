#include<iostream>
#include<cmath>
using namespace std;
class d1
{
	protected:
		float x,y,distance1;
	public:
		void area()
		{
			cout<<"in d1 enter\n";
			cin>>x>>y;
			distance1=abs(x-y);
			 //cout<<"distance = "<<distance<<endl;
		}
};
class d2:public d1
{
	protected:
		float p,q,distance2;
	public:
		void area()
		{
			d1::area();
			cout<<"in d2 enter\n";
			cin>>p>>q;
			distance2=distance1+abs(p-q);
			//cout<<"distance= "<<distance<<endl;
		}
};
class d3:public d2
{
	protected:
		float r,s,distance3;
	public:
		void area()
		{
			d2::area();
			cout<<"in d3 enter\n";
			cin>>r>>s;
			distance3=distance2+abs(r-s);
			cout<<"distance= "<<distance3<<endl;
		}
};
int main()
{
	class d3 obj1;
	obj1.area();
	return 0;
}
