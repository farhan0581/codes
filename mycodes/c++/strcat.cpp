#include<iostream>
#include<string.h>
using namespace std;
class strings
{
	private:
		char a[100];
	public:
		strings()
		{
			strcpy(a," ");
		}
		strings(char *arr)
		{
			strcpy(a,arr);
		}
		strings(strings &obj)
		{
			strcpy(a,obj.a);
		}
		void show()
		{
			puts(a);
		}
		strings operator +(strings s)
		{
			strings temp=s;
			strcat(temp.a,a);
			return temp;
		}
};
int main()
{
	char p[100];
	cout<<"enter\n";
	cin>>p;
	class strings s1(p),s2(p),s3;
	//s1.show();
	s3=s1+s2;
	s3.show();
		return 0;
}
