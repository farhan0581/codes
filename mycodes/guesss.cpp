#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,z=0;
    long int a,b,small,big;
	float c,p;
	fflush(stdin);
	scanf("%d",&t);
	while(z<t)
	{
		scanf("%ld%ld",&a,&b);
		if(a>=b)
		{
			big=a;
			small=b;
		}
		else 
		{
			big=b;small=a;
		}
		if(big%2==0)
		{
			c=(big/2)*small;
		}
		else
		{
			c=((big+1)/2*(small/2))+((big/2)*(small/2));
		}
	    p=c/(a*b);
	    printf("%f\n",p);
	z++;
		
	}
	return 0;
}
