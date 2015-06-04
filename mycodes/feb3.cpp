#include<stdio.h>
int main()
{
	long long int t,n,s,i,c=0;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&s);
		for(i=1;i<=n;i++)
		{
			if(s>=i&&s>(n-i+1))
			{
				s=s-i;
				c++;
				printf("s=%lld c=%lld ",s,c);
			}
			else if(s<=(n-i+1))
			break;
			else if(s<i)
			break;
		}
		if(c==0)
		c=1;
		printf("%lld\n",n-c);
		c=0;
	}
	return 0;
}
