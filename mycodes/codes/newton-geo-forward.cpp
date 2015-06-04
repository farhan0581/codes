#include<stdio.h>
#include<math.h>
main()
{
	float ax[10],ay[10],d[10][10],x,y,h,k;
	int i,j,n;
	printf("Enter the number of values\n");
	scanf("%d",&n);
	printf("Enter values of x and y\n");
	for (i=0; i < n; ++i)
	{
		scanf("%f %f",&ax[i],&ay[i]);
	}
	for (i = 0; i < n; ++i)
	{
		d[i][0]=ay[i];
	}
	// Calculate difference

	for(i=1;i<n;i++)
	{
		for (j = 0; j < n-i; ++j)
		{
			d[j][i]=d[j+1][i-1]-d[j][i-1];
		}

	}
	// display difference table
     for(i=0;i<n;i++)
	{
		for (j = 0; j < n-i; ++j)
		{
		    printf("%.3f\t",d[i][j]);	
		}
		printf("\n");
	}
     
     printf("Enter value of h:: ");
     scanf("%f",&h);
     printf("Enter values of x to calculate:: ");
     scanf("%f",&x);
     
     k=(x-ax[0])/h;
     
     
     for(i=0;i<n;i++)
     {
     	
     	int fact=1;
     	float a=k,t=1;
     	for(j=0;j<i;j++)
     	{
     		
     		t=t*a;
     		a=a-1;
     		fact=fact*(j+1);
     		
     	}
     	y=y+(t/fact)*d[0][i];
     }
     
     
     printf("Value at x=%f is %f\n",x,y);
}
