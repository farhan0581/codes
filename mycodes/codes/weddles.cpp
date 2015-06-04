//Weddles
#include<stdio.h>
#include<math.h>

float f(float x)
{
	return(1/(1+x*x));
}
int main()
{
	float h,Y,k1=0.0,k2=0.0,k3=0.0,k4=0.0,x[20],y[20],a,b;
	int i,j,k,n;

	printf("Enter Lower and Upper limits:: ");
	scanf("%f%f",&a,&b);
	printf("Enter value of h(step size):: ");
	scanf("%f",&h);
	
	n=(b-a)/h;
   
    for(i=0;i<=n;i++)
    y[i]=f(a+i*h);
	
	for(i=1;i<n;i++)
	{
		if(i%6==0)
		   k1=k1+2*y[i];
		else if(i%3==0)
		   k2=k2+6*y[i];
		else if(i%2==0)
		   k3=k3+y[i];
		else
		   k4=k4+5*y[i];
	}
	Y=((3*h)/10)*(y[0]+y[n]+k1+k2+k3+k4);
	printf("\nAnswer is %f\n",Y);
	return 0;
}
