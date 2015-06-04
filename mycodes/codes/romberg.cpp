#include<stdio.h>
#include<math.h>

float f(float x)
{
	return pow((pow(x,4)+pow(x,3)-pow(x,2)+7*x),0.5);
}
main()
{
	float rom[10][10],h,h1,a,b,y[10],temp,p;
	int i,j,n,count=0;
	printf("Enter Initial and last value of x(limit)\n");
	scanf("%f%f",&a,&b);
	
	printf("Enter h\n");
	scanf("%f",&h);
	
	for(i=1;i<=5;i++)
	{
		h1=(b-a)/pow(2,i);
	
		n=(b-a)/h1;
		for(j=0;j<=n;j++)
		 y[j]=f(a+j*h1);
		 
		temp=0.0;
		
		for(j=1;j<n;j++)
		{
		    if(j%2!=0)
			temp+=4*y[j];
			else
			temp+=2*y[j];	
		}
		
		temp=(h1/3)*(y[0]+y[n]+temp);
		rom[i][0]=temp;
		//	printf("h1= %f %f\n",h1,temp);
		count++;
	}
	for(i=1;i<count;i++)
	{
		
		p=pow(4,i);
		for(j=0;j<count-i;j++)
		{
			rom[j][i]=(p*rom[j+1][i-1]-rom[j][i-1])/(p-1);
		}
	}
	printf("Answer is %f",rom[0][count-1]);
}
