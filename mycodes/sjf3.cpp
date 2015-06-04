#include<stdio.h>
int min();
static int a[4],f[4];
int p[4]={10,2,5,3};
int main()
{
	int i=0,k=0,c=0,j,s=0,g[20],m[4],l=0;
	while(p[0]!=0 || p[1]!=0 || p[2]!=0 || p[3]!=0)
	{
	//	for(i=0;i<4;i++)
		//{
			if(c<=4)
			{
				a[i]=1;i++;
				j=min();
				p[j]=p[j]-1;
				s=s+1;
				g[k]=s;
				if(p[j]==0)
				{
					f[j]=1;
					m[l]=j;
					l++;//printf("%d\t",s);
				}
				
				printf("P%d\t",j+1);
				c++;k++;
			}
			else
			{
				j=min();
			    s=s+p[j];
			    g[k]=s;k++;
				p[j]=0;
				f[j]=1;
				if(p[j]==0)
				{
					m[l]=j;l++;//printf("%d\t",s);
				}printf("P%d\t",j+1);
			}
		//}
	}
printf("\n");

	for(i=0;i<k;i++)
	{
		printf("%d\t",g[i]);
	}
	//to print, what is the sequence of process completion,activate the for loop
	//for(i=0;i<4;i++)
	//printf("%d\t",m[i]);
	
	
	
	return 0;
}
int min()
{
	int st=0,i;
//	nim=p[0];
	for(i=0;i<4;i++)
	{
		if(a[i]==1&&p[i]<p[st]&&f[i]!=1)
		{
			st=i;
		
		}
	}
	return st;
}
