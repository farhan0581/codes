#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,i,n,m,p1,p2,s=100000000,b=-10,a;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		s=100000000,b=-10;
		for(i=0;i<m;i++)
		{
			scanf("%lld",&a);
			if(a>=b)
			b=a;
			if(a<=s)
			s=a;
		}
		
		for(i=0;i<n;i++)
		{
			p1=abs(i-s);
			p2=abs(i-b);
			if(p1>=p2)
			printf("%lld ",p1);
			else
			printf("%lld ",p2);
		}printf("\n");
	}
	return 0;
}
