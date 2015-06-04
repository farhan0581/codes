#include<stdio.h>
//#include<conio.h>
#include<math.h> 

float f(float x)  
{
return(x*sin(x)-1);  
}

main()
{
	float x1,x2,x3;
	int c=0;
	printf("Enter value of x1 and x2: ");
	scanf("%f %f",&x1,&x2);
	if(f(x1)*f(x2)<0.0)
	{
		while(c<=8)
		{
		x3=(x2+x1)/2;
		if(f(x1)*f(x3)<0.0)
		x2=x3;
		else
		x1=x3;
		c++;
		printf("root lies between:: %f %f\n",x1,x2);
		
	    }
	    printf("%f\n",x3);
	}
}
