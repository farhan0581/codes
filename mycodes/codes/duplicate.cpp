
#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	//float res;
	return pow((pow(x,4)+pow(x,3)-pow(x,2)+7*x),0.5);
	//return res;
}

main()
{
	float ll,ul,ih[20],h,sum,y[20];
	int n,i,j,k=0,p;
//	clrscr();
	printf("Enter lower limit,upper limit,n: ");
	scanf("%f%f%d",&ll,&ul,&n);
	for(i=0;i<=n;i++)
	{
		p=pow(2,i);
		h=(ul-ll)/p;
		y[0]=1;
		y[p]=f(ul);
		sum=y[0]+y[p];
		for(j=1;j<p;j++)
			sum=sum+2*f(ll+j*h);
		ih[i]=(sum*h)/2;
	}
	while(n>0)
	{
		k=2;
		p=pow(k,2);
		for(i=0;i<n;i++)
			ih[i]=(p*ih[i+1]-ih[i])/(p-1);
		k=k+2;
		n--;
	}
	printf("\n\nResult is: %f",ih[0]);
//	getch();
}

