#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int a[100][100],i,j,k,t,n,m,b[10][10];
	srand(time(NULL));
	printf("enter the no of elements and no of rows::");
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			again:
			t=1+rand()%n;
			a[i][j]=t;
			for(k=0;k<j;)
			{
				if(a[i][k]==a[i][j])
				goto again;
				else
				k++;
			}printf("%d\t",a[i][j]);
			
		}printf("\n");
	}k=1;j=0;
	for(i=0;i<m;i++)
	{
		for(;j<n;j++)
		{
			if(a[i][j]==k)
			{
				b[i][k-1]=j;
				k++;printf("%d\t",j);j=0;
			}
		}k=1;printf("\n");
		
	}
	
	
	return 0;
}
