#include<stdio.h>
int inverse();
int main()
{
	long long int n,a=1,b,c,i;
	scanf("%lld",&n);
	if(n%2!=0)
	{
		b=n-1;
		for(i=0;i<6;i++)
		{
			a=a*b;
			if(a>1000000007)
			a=a%1000000007;
			b=b-2;
		}
	}
	else
	{
		b=n-2;
		for(i=0;i<6;i++)
		{
			a=a*b;
			if(a>1000000007)
			a=a%1000000007;
			b=b-2;
		}
		
	}
      	a=a%1000000007;
		c=inverse();
		c=c%1000000007;
		printf("%lld",(a*c)%1000000007);
	return 0;
}
int inverse()
{
	long long int d=46080,m=1000000007,z=1000000005,r=1;
	while(z>0)
	{
		if(z%2!=0)
		r=(r*d)%m;
		d=(d*d)%m;
		z=z/2;
	}
	return r;
}
