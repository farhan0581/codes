#include<stdio.h>
int main()
{
	static long long int n,i,ans,sum,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		i=1;
		while(1)
		{
			if(n%i==0&&i!=n/i)
			ans=ans+i+n/i;
			//printf("%lld ",ans);
			if(i==n/i&&n%i==0)
			{
				ans=ans+i;
				break;
			}
			i++;
			if(i>n/i)
			break;
			
		}
		printf("%lld\n",ans);
		ans=0;i=1;
	}
	return 0;
}
