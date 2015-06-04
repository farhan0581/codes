#include<stdio.h>
int main()
{
	int i,j,k,l,m=0,a[3][3],b[3][3],c[50];
	printf("enter matrix one");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("second\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0,k=0;i<3,k<3;i++,k++)
	{
		for(j=0,l=0;j<3,l<3;j++,l++)
		{
			if(a[i][j]==b[k][l])
			{
				c[m]=a[i][j];
				printf("%d",c[m]);m++;
			}
		}
	}
	return 0;
}
