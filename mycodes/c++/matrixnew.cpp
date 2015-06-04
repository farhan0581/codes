#include<iostream>
using namespace std;
class matrix
{
	private:
		int row,col,i,j,**a,*b;
	public:
		matrix(int r,int c)
		{
			row=r;col=c;
			a=new int*[row];
			for(i=0;i<row;i++)
			{
				a[i]=new int[col];
			}
		}
		matrix(int r)
		{
			row=r;
			b=new int[row];
			cout<<"enter\n";
			for(i=0;i<row;i++)
			cin>>b[i];
			for(i=0;i<row;i++)
			cout<<b[i]<<" ";
		}
		void getval()
		{
			cout<<"now";
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		void showval()
		{
			cout<<"vlsus";
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					cout<<a[i][j]<<" ";
				}cout<<endl;
			}
		}
			
};
int main()
{
	class matrix m(3,3),m1(3);
	m.getval();
	m.showval();
	return 0;
}
