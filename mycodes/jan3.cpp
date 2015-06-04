#include<stdio.h>
long long int gcd(long long int g,long long int h);
int main()
{
	long long int a[100005],t,q,n,i,f,z,x,l,r,c,o;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%ld",&n,&q);
		for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
		
		while(q--)
		{
			scanf("%lld%lld",&l,&r);
			f=0;c=0;o=0;
			for(i=1;i<=n;i++)
			{
				if(i<l||i>r)
				{
					if(a[i]==1)
					{
						printf("%d\n",1);
						o=1;
						break;
					}
						if(f==0)
						{
							x=a[i];
							f=1;
						}
						else
						{
							if(f==1)
							{
								z=gcd(x,a[i]);
								f=2;
								c++;//printf("%lld-",z );	
							}
							else
							z=gcd(z,a[i]);
							//printf("%lld_",z );
							
						}
					}
		
				}
				if(o==0)
				{
					if(c>0)
				printf("%lld\n",z);
				else
				printf("%lld\n",x);
				}
				
			
		}
		
	}
	return 0;
}
long long int gcd(long long int g,long long int h)
{
	long long int u;
	if(g%h==0)
	return h;
	if(h%g==0)
	return g;
	else
	{
				while(h!=0)
			{
				u=g%h;
				g=h;
				h=u;
			}
			return g;
	}
	
}
