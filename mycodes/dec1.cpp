#include<stdio.h>
int main()
{
	long long int a[100005],i,n,c=0,t,big;
	static long long int b[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		big=0;c=0;
		
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(big<=a[i])
			big=a[i];
			b[a[i]]=b[a[i]]+1;
		}
		for(i=1;i<=big;i++)
		{
			if(b[i]>1)
			{
				c=c+b[i]-1;
				b[i]=0;
			}
			if(b[i]==1)
			b[i]=0;
		}
		//printf("%lld ",c);
		printf("%lld\n",n-c);
		
	}
	return 0;
}
