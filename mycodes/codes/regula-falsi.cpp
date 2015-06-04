#include<stdio.h>
//#include<conio.h>
#include<math.h> 

float f(float x)  
{
return(cos(x)-x*exp(x));  
}

 main()  
{ 
float x1,x2,x3;  
int c=0;  
a25: 
printf("\n Enter value of x1:");  
scanf("%f",&x1);  
printf("\n Enter value of x2:");  
scanf("%f",&x2);
		  
		if(f(x1)*f(x2)<0.0)  
		{   
		x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
  
		while(fabs(f(x3))>=0.0001)   
		{   
		c++;   
		if(f(x1)*f(x3)<0.0)   
		x2=x3;   
		else   
		x1=x3;   
		x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));   
		printf("\n\n the %d,Iteration is %f ",c,x3);   
		}   
		printf("\n\n the answer is repeated at %d lteration is %f",c,x3);   
        }   
else   
{
  printf("Enter valid value of x1 and x2 :\n"); 
  goto a25;
}
}
