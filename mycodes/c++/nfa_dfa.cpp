#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	static int com,sy,flag,mcom,msy;
	int i,j,k,lines=0,
	a[3][2][2]={

		{{1,2},{0}},

		{{10},{20}},

		{{30},{32}}
	};

	char ch;

	ifstream f;
	f.open("farhan_test.txt",ios::in);
	f>>resetiosflags(ios::skipws);
	if(!f)
	{
		cout<<"file does not exist\n";
	}
	while(f)
	{
		f>>ch;
			if(ch!=' '&&ch!='\n')
				sy++;
			if(ch==',')
			{
				com++;
			}

			if(flag==1)
			{
				if(mcom<com)
					mcom=com;
				if(msy<sy)
					msy=sy;
				flag=0;
				com=0;sy=0;
			}

		if(ch=='\n')
			{
				lines++;
				flag=1;
			}
	}

	//now declare a 3d array

	//int arr[lines+1][2][mcom+1];

	int arr[10][10][10];

	f.clear();

	
	cout<<"lines,sy,com="<<lines<<" "<<msy<<" "<<mcom<<endl;;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				cout<<a[i][j][k]<<" ";
			}cout<<endl;
		}cout<<endl;
	}

	cout<<"here"<<endl;

	//cout<<a[1][1][0];

	return 0;
}