#include<stdio.h>
int main()
{
	long long t,i,n,a[100000],sum=0,m=1000000009;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("\n%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum%m+a[i]%m;
			sum=sum%m;
			
		}
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");

	}
}
