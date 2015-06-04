#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[400];
	int i,j,l,m,n,k=0;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the first array element\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second array element\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(l=0;l<n;l++)
			{
				for(m=0;m<n;m++)
				{
					if(a[i][j]==b[l][m])
					break;
				}
				if(a[i][j]==b[l][m]&&l<n&&m<n)
				{
					c[k++]=a[i][j];//printf("%d%d  %d%d",i,j,l,m);
					b[l][m]=-999;
					break;
				}
			}
		}
	}
	/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}printf("\n");
	}*/
	for(i=0;i<k;i++)
	{   //printf("jxvbjxc");
		printf("%d\t",c[i]);
	}
	return 0;
}
