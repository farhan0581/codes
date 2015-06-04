#include<iostream>
using namespace std;
class student
{
	private:
		int rollno,age;
		char name[20],clas[10];
	public:
		friend istream & operator >> (istream &in,student &s);
		friend ostream & operator << (ostream &out,student &s);
};
istream & operator >> (istream &in,student &s)
{
	cout<<"enter the name\n";
	in>>s.name;
	cout<<"enter the roll no\n";
	in>>s.rollno;
	cout<<"enter the class\n";
	in>>s.clas;
	cout<<"enter the age";
	in>>s.age;
	return in;
}
ostream & operator << (ostream &out,student &s)
{
	out<<"Name:"<<s.name<<endl;
	out<<"class:"<<s.clas<<endl;
	out<<"Roll no"<<s.rollno<<endl;
	out<<"age"<<s.age<<endl;
	return out;
}
int main()
{
	class student s1;
	cin>>s1;
	cout<<s1;
	return 0;
}
