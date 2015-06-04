#include<stdio.h>
#include<math.h>


main()

{

	float x[10],y[10],y1,d[10][10],p,x1;
	int i,j,n;
	printf("Enter value of n\n");
	scanf("%d",&n);
	printf("Enter value of x and y\n");
	for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }
	for(i=0;i<n;i++)
    {
        d[i][0]=y[i];
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            d[j][i]=(d[j+1][i-1]-d[j][i-1])/(x[i+j]-x[j]);
        }
    }
    y1=y[0];
    p=1;
    printf("Enter value of x1\n");
    scanf("%f",&x1);
    for(i=1;i<n-1;i++)
    {
        p=p*(x1-x[i-1]);
        y1+=p*d[0][i];

    }
	printf("Answer is %f",y1);
}

