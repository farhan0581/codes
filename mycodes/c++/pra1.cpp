#include<iostream>
#include<cstring>
using namespace std;
class bound
{
	private:
		int size,**a,i;
	public:
		bound()
		{
			size=10;
		}
		bound(int x)
		{
			size=x;
			a=new int*[size];
			for(i=0;i<size;i++)
			{
			a[i]=new int[size];
			}
		}
		int & operator [](char *f)
		{
			cout<<"called as "<<f;
			
		}
		void operator ()(int q,int w,int e)
		{
			size=q;i=w;
			cout<<"called"<<q<<w;
		}
//		void assign(int p)
//		{ 	
//			a[p]=2;
//			for(i=0;i<size;i++)
//			cout<<a[i]<<endl;
//		}
		void assign()
		{
			int j;
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					a[i][j]=i;
				}
			}
		}
		void dis()
		{
			int j;
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					cout<<a[i][j];
				}cout<<endl;
			}
		}
};
int main()
{
	class bound obj(5);
	char str[10];
	strcpy(str,"farhan");
	obj[str];
	obj.assign();
	obj.dis();
	obj(1,2,30);
	return 0;
}
