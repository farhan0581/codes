#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (exp(-1*(x*x)));
}
main()
{
	float x[10],y[10],h,a,b,Y,k1,k2,k4;
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
	
	k1=0.0,k2=0.0,k4=0.0;
	
	for(i=1;i<n;i++)
	{
		if(i%4==0)
		k4+=14*y[i];
		else if(i%2==0)
		k2+=12*y[i];
		else
		k1+=32*y[i];	
	}
	
	Y=(2*h)*(7*y[0]+7*y[n]+k1+k2+k4)/45;
	
	printf("%f",Y);
	
}
