#include<iostream>
using namespace std;
class pntr_object
{
	private:
		char name[10];
		int roll_no;
	public:
		void setdata()
		{
			cout<<"enter the name and roll no\n";
			cout<<this<<endl;
			cin>>this->name>>this->roll_no;
		}
		void print()
		{
			cout<<"the name is  "<<this->name<<" and roll no is "<<this->roll_no<<endl;
		}	
};
int main()
{
	class pntr_object o1,o2,o3;
	o1.setdata();
	o1.print();
	o2.setdata();
	o2.print();
	o3.setdata();
	o3.print();
	return 0;
}
