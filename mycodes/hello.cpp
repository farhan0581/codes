#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[8][8],t;
FILE *fp;
	fp=fopen("dj.txt","r");
	while((fscanf(fp,"%d",&t))!=EOF)
	{printf("%d",t);
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				a[i][j]=t;printf("%d",a[i][j]);
			}
		}
	}
	return 0;
}
