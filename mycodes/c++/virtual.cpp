#include<iostream>
#include<math.h>
using namespace std;
class polygon
{
	protected:
		int side,ar;
	public:
		virtual void area()
		{
			cout<<"area function of polygon\n";
		}
		polygon()
		{
			cout<<"---base class polygon's object created---\n";
		}
		
};
class rectangle:public polygon
{
	private:
		int l,b,ar;
	public:
		void area()
		{
			cout<<"enter the length and breadth of rectangle\n";
			cin>>l>>b;
			ar=l*b;
			cout<<"area rectangle="<<ar<<endl;
		}
		rectangle()
		{
			cout<<"---derived class rectangle's object created---\n";
		}
};
class triangle:public polygon
{
	private:
		float s,a,b,c,ar,t;
	public:
		void area()
		{
			cout<<"enter the sides of the triangle\n";
			cin>>a>>b>>c;
			s=(a+b+c)/2;
			t=s*(s-a)*(s-b)*(s-c);
			ar=pow(t,0.5);
			cout<<"area triangle="<<ar<<endl;
		}
		triangle()
		{
			cout<<"---derived class triangle's object created---\n";
		}
};
int main()
{
	class polygon b1,*bp;
	class rectangle r1;
	class triangle t1;
	cout<<"rectangle\n";
	bp=&r1;
	bp->area();
	cout<<"triangle\n";
	bp=&t1;
	t1.area();
	return 0;
}
