#include<stdio.h>
int main()
{
	int i,n,j,c=1,a[50][50];
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			{
				a[i][j]=c;
			}
			else
			a[i][j]=n*n-c+1;
			c++;
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
}
