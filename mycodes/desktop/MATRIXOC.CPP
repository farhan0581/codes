/* check small matrix in big matrix */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int CHECK(int a[][50],int b[][50],int x,int y,int q);
int main()
{
     int i,j,n,m,k,l,c=0;
    int a[50][50],b[50][50];
	printf("\nEnter the size of matrix A\n");
	scanf("%d",&m);
	srand(time(NULL));
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=rand()%2;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the size of matrix B\n");
	scanf("%d",&n);
	printf("\nEnter the %d value in matrix B:\n",n*n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==b[0][0])
			{
				CHECK(a,b,i,j,n);
				if(CHECK(a,b,i,j,n)==1)
				c++;
			}
		}
	}
printf("THE NO OF OCCURANCES ARE %d\n",c);
	return 0;
}
int CHECK(int a[][50],int b[][50],int x,int y,int q)
{
	int i,j,l,k;
	for(i=x,k=0;i<q+x,k<q;i++,k++)
	{
		for(j=y,l=0;j<q+y,l<q;j++,l++)
		{
			if(a[i][j]!=b[k][l])
			return 0;
			else
		    continue;
		}
	
	}
		if(i==(q+x)&&j==(q+y))
		{
		return 1;}
}
