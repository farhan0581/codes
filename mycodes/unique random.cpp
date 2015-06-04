#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int a[3][3],i,j,c=0,k,b[9],t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   again:
			t=rand()%10;
			for(k=0;k<=c;)
			{
				if(b[k]==t)
				goto again;
				else
				k++;
			}
			if(k-1==c)
			{
			a[i][j]=t;b[k]=t;
			printf("%d\t",a[i][j]);
			c++;}
		}printf("\n");
		
	}
	return 0;
}
