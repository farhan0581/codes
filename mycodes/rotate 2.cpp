#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,m,p1,p2,r1,r2,x,a[100099],v,i,start=1,end;
	char q;
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	end=n;
	for(i=1;i<=m;i++)
	{
		fflush(stdin);
		scanf("\n%c%lld",&q,&v);
		if(q=='R')
		{
			x=(start+v-1)%n;
			if(x==0)
			printf("%lld\n",a[n]);
			else
			printf("%lld\n",a[x]);
		}
		else if(q=='C')
		{
			r1=(start+v)%n;
			if(r1==0)
			start=n;
			else
			start=r1;
			r2=(end+v)%n;
			if(r2==0)
			end=n;
			else
			end=r2;
		}
		else if(q=='A')
		{
			if(v>n)
				v=v%n;
			p1=(start+n-v)%n;
			if(p1==0)
				start=n;
			else
				start=p1;
			p2=(end+n-v)%n;
			if(p2==0)
				end=n;
			else
				end=p2;
		}
   }
		return 0;
}
