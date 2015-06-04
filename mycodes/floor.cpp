#include<stdio.h>
int main()
{
	long long int sum=0,p1,p2,p3,p4,i,m,n,z=0,t;
	scanf("%lld",&t);
	while(z<t)
	{
		scanf("%lld%lld",&n,&m);
		for(i=1;i<=n;i++)
		{
			i=i%m;
			p1=(i*i)%m;
			p2=(p1*i)%m;
			if(n%i!=0)
			{
				p3=(p2*i)%m;
				p4=(p3*(n/i))%m;
				sum=(sum+p4)%m;
			}
			else if(n%i==0)
			{
				p2=(p2*n)%m;
				sum=(sum+p2)%m;
			}
		}
		printf("%lld\n",sum%m);
		sum=0;
		z++;
	}
	return 0;
}
