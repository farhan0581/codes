#include<stdio.h>
long long int gcd(long long int g,long long int h);
int main()
{
	long long int a[100005],t,q,n,i,f,z,x,l,r,c,o,min,j;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%ld",&n,&q);
		min=-1;
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			if(min<a[i])
			min=a[i];
		}
		
		while(q--)
		{
			
			scanf("%lld%lld",&l,&r);
			f=0;c=0;o=0;
			f=r-l+1;
			for(i=1;i<=min/2;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j<l||j>r)
				{
					if(a[j]%i==0)
					c++;
					else
					break;
				}
		
				}
				if(c==f)
				o=i;
				
			}
			printf("%lld\n",o);
			
		
	}
}
	return 0;
}

