#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	int a[3];
	printf("enter the three digits\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				{
					printf("\n%d%d%d",a[i],a[j],a[k]);
				}
			}
		}
	}
	return 0;
}
