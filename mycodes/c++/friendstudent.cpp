#include<iostream>
using namespace std;
class average;
class student
{
	private:
		float m1,m2,m3,av;
		char name[10];
	public:
		void getdata()
		{
			cout<<"enter your name\n";
			cin>>name;
			cout<<"enter the marks of 3 subjects\n";
			cin>>m1>>m2>>m3;
		}
		void display()
		{
			
		}
		friend class average;
};
class average
{
	private:
		float sum;
	public:
		void getav(student a)
		{
			a.av=(a.m1+a.m2+a.m3)/3;
			cout<<"the average marks are "<<a.av;
		}
};
int main()
{
	class student obj1,obj2;
	average a1,a2;
	obj1.getdata();
	a1.getav(obj1);
	return 0;
}
