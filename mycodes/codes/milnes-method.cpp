#include<stdio.h>
#include<math.h>

float f(float a, float b)
{
	return(a*b+b*b);
}
main()
{
	float x[5],y[5],f1,f2,f3,f4,x0,y0,k1,k2,k3,k4,h,yc;
	int i,j;
	printf("Enter initial value of x and y\n");
	scanf("%f %f",&x0,&y0);
	printf("Enter value of h\n");
	scanf("%f",&h);
	x[0]=x0;y[0]=y0;
	for(i=1;i<=4;i++)
	x[i]=x0+i*h;
	for(i=1;i<=3;i++)
	{
		k1=h*(f(x0,y0));
		k2=h*(f(x0+h/2,y0+k1/2));
		k3=h*(f(x0+h/2,y0+k2/2));
		k4=h*(f(x0+h,y0+k3));
		y[i]=y0+(k1+2*k2+2*k3+k4)/6;
		y0=y[i];
		x0=x0+h*i;
	}
	printf("here\n");
	f1=f(x[1],y[1]);
	f2=f(x[2],y[2]);
	f3=f(x[3],y[3]);
	//predictor formula
	y[4]=y[0]+(4*h/3)*(2*f1-f2+2*f3);
	f4=f(x[4],y[4]);
	//corrector formula
	l15:
		yc=y[2]+(h/3)*(f2+4*f3+f4);
		if(fabs(1-y[4]/yc)<=0.0001)
		goto l25;
		else
		{
			y[4]=yc;
			goto l15;
		}
	l25:
		printf("x\t\ty\n");
		for(i=1;i<=4;i++)
		{
			printf("%f\t\t%f\n",x[i],y[i]);
		}
}

