//Gauss-Elimination for n equation
/*
   INPUT FORMAT(for 3 variable)
x0 y0 z0 d0
x1 y1 z1 d1
x2 y2 z2 d2
*/
#include<stdio.h>
int main()
{
	float a[10][10],temp,x3,x2,x1,var[20];
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
	printf("\n\tYour Entered Matrix\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	k=1;
	while(k!=n+1)//Start<! Loop-------Make all element below digonal is 0
	{
		i=k;
	for(;i<n;i++)
	{
		temp=a[i][k-1]/a[k-1][k-1];
		for(j=0;j<n+1;j++)
		{
			a[i][j]=a[i][j]-temp*a[k-1][j];
		}
	}
	k++;
	}               //------End of loop------!>
	printf("\n\nUpper triangle matrix\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		x3=a[i][n];
		for(j=i+1;j<n;j++)
		{
			x3-=var[k]*a[i][j];
			k++;
		}
		var[i]=x3/a[i][i];
		k=i;
	}
	for(i=0;i<n;i++)
	printf("value of variable %d is %.2f\n",i+1 ,var[i]);
	printf("\n");
	/*x3=a[2][3]/a[2][2];
	x2=(a[1][3]-x3*a[1][2])/a[1][1];
	x1=(a[0][3]-x3*a[0][2]-a[0][1]*x2)/a[0][0];
	printf("x=%.2f y=%.2f z=%.2f",x1,x2,x3);*/
}
