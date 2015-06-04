//Gauss-Jorden for n equation
/*
e.g--->   INPUT FORMAT(for 3 variable)
x0 y0 z0 d0
x1 y1 z1 d1
x2 y2 z2 d2
*/
#include<stdio.h>
int main()
{
	float a[10][10],temp,x,y,z;
	int i,j,k,n;
	printf("Enter how many equation :: ");
	scanf("%d",&n);
	printf("Enter coff. in pattern (given in comment from line no 3-7)\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nYour Entered matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f	",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	k=0;
	while(k!=n-1)//Start<!----Loop-------Make all element below digonal is 0( Upper triangle marix)
	{
		i=k+1;
	for(;i<n;i++)
	{
		temp=a[i][k]/a[k][k];
		for(j=0;j<n+1;j++)
		{
			a[i][j]=a[i][j]-temp*a[k][j];
		}
	}
	k++;
	}               //------End of loop------!>
	printf("\n");
	k=n-1;
	while(k!=0)//Start<! Loop-------Make all element above digonal is 0( finally digonal matrix)
	{
		i=k-1;
	for(;i>=0;i--)
	{
		temp=a[i][k]/a[k][k];
		for(j=0;j<n+1;j++)
		{
			a[i][j]=a[i][j]-temp*a[k][j];
		}
	}
	k--;
	}   //-------End of loop------!>
	printf("\n\tfinal mat\n\n");  
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)//variable value
	{
		printf("Value of variable %d is %f\n",i+1,a[i][n]/a[i][i]);
	}
}
