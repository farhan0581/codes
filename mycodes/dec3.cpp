#include<stdio.h>
int main()
{
	
	long long int a[100005],sum=0,t,n,k,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("\n%lld%lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		if(sum%k==0)
		printf("yes\n");
		else
		printf("no\n");
		sum=0;
	}
	return 0;
}

