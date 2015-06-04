#include<stdio.h>
long int gcd(long int g,long int h);
int main()
{
	static long int a[100005],t,q,n,i,f,z,x,l,r,o,j,b[100000],c[100000];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld%ld",&n,&q);
		for(i=1;i<=n;i++)
		scanf("%ld",&a[i]);
		
		while(q--)
		{
			scanf("%ld%ld",&l,&r);
			f=0;o=0;
			for(i=1;i<l;i++)
			{
				b[i]=a[i];
		    }
		    for(i=r+1,j=1;i<=n;i++,j++)
		    {
		    	c[j]=a[i];
		    }
		    for(i=1,j=i+1;i<l,j<l;i++,j++)
		    {
		    	z=gcd(b[i],b[j]);
		    	b[j]=z;
		    }
		    for(i=1,j=i+1;i<=n-r,j<=n-r;i++,j++)
		    {
		    	z=gcd(c[i],c[j]);
		    	c[j]=z;
		    }
		    z=gcd(b[l-1],c[r+1]);
		    
			printf("%ld\n",z);
			
		}
		
	}
	return 0;
}
long int gcd(long int g,long int h)
{
	long int u;
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
