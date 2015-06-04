#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float a);
float f(float a)
{return 1/(1+a*a);
}
int main()
{float x0,xn,h,h1,x,ih[15],s;
int i,j;
for(i=0;i<15;i++)
{ih[i]=0;
}
printf("enter the values of lowerand upper limits respectively");
scanf("%f %f",&x0,&xn);
printf("enter the value of stepsize");
scanf("%f",&h);
x=x0;
h1=(xn-x0);
s=f(x0)+f(xn);
ih[0]=h1/2*s;
for(i=1;h1>=h;i++)
{h1=(xn-x0)/pow(2,i);
ih[i]=ih[i]+h1/2*s;
printf("%f\n",ih[i]);
for(j=1;x+(j*h1)<xn;j++)
{ih[i]=ih[i]+h1*f(x+j*h1);
x=x+h1;
}
}
for(i=0;i<15;i++)
{printf("%f\n",ih[i]);
}
getch();
return 0;
}



