#include<stdio.h>
int main()
{
	static long long int n,i,ans,sum,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			ans=ans+i;
		}
		printf("%lld\n",ans+n);
		ans=0;
	}
	return 0;
}
