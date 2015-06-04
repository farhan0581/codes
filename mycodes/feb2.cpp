#include<stdio.h>
int main()
{
	long long int t,i,n,big,p,a[100005],sum;
	static long long int b[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);big=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]]=b[a[i]]+1;
			if(big<a[i])
			big=a[i];
		}p=0;
		for(i=1;i<=big;i++)
		{
			if(p<b[i])
			{
				p=b[i];
			}
			sum=sum+b[i];
			b[i]=0;
		}
		printf("%lld\n",sum-p);
		sum=0;

	}
	return 0;
}
