#include<iostream>
using namespace std;
class matrix
{
	private:
		int order,m[10][10],i,j;
	public:
		matrix()
		{
			cout<<"enter order\n";
			cin>>order;
		}
		void getvalue()
		{
			cout<<"enter the values for matrix\n";
			for(i=0;i<order;i++)
			{
				for(j=0;j<order;j++)
				{
					scanf("%d",&m[i][j]);
				}
			}
		}
		matrix operator + (matrix a)
		{
			//int z;
			//z=a.getorder();
			matrix temp;
			for(i=0;i<order;i++)
			{
				for(j=0;j<order;j++)
				{
					temp.m[i][j]=m[i][j]+a.m[i][j];
				}
			}
			return temp;
		}
		matrix operator - (matrix a)
		{
			
			matrix temp;
			for(i=0;i<order;i++)
			{
				for(j=0;j<order;j++)
				{
					temp.m[i][j]=m[i][j]-a.m[i][j];
				}
			}
			return temp;
		}
		void display()
		{
			for(i=0;i<order;i++)
			{
				for(j=0;j<order;j++)
				{
					cout<<m[i][j]<<" ";
				}cout<<endl;
			}
		}
		int getorder()
		{
			return order;
		}
			
};
int main()
{
	matrix m1,m2,m3;
	m1.getvalue();
	m2.getvalue();
	cout<<"addition\n";
	m3=m1+m2;
	m3.display();
	cout<<"subtraction\n";
	m3=m1-m2;
	m3.display();
	return 0;
}
