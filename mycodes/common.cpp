#include<stdio.h>
int main()
{
	int i,k,j,l,p=0,a[10][10],b[10][10],c[40],n;
	printf("enter the size of matrix");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("matrix1\t");
			scanf("%d",&a[i][j]);
			printf("matrix2\t");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				for(l=0;l<n;l++)
				{
					if(a[i][j]==b[k][l]&&a[i][j]!=0&&b[k][l]!=0)
					c[p]=a[i][j];
					a[i][j]=0;b[k][l]=0;
				}
				
			}
		}
	}
	for(i=0;i<p;i++)
	{
		printf("%d",c[i]);
	}
	
	return 0;
}
