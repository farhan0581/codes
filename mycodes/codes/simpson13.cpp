#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (exp(-1*(x*x)));
}
main()
{
	float x[10],y[10],h,a,b,Y;
	int i,j,n;
	
	printf("Enter value or step size h\n");
	scanf("%f",&h);
	
	printf("Enter inital and last value of x\n");
	scanf("%f %f",&a,&b);
	
	n=(b-a)/h;
	
	for(i=0;i<=n;i++)
	{
		y[i]=f(a+i*h);
	}
	
	Y=0.0;
	
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		  Y+=2*y[i];
		 else
		  Y+=4*y[i];	
	}
	
	Y=(h/3)*(y[0]+y[n]+Y);
	
	printf("%f",Y);
	
}
