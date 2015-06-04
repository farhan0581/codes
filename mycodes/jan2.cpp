#include<stdio.h>
int main()
{
	long long int t,n,k,a[100009],b[100008],big,q,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&b[i]);
			big=0;
		for(i=0;i<n;i++)
		{
			q=(k/a[i])*b[i];
			if(big<q)
			big=q;
		}
		printf("%lld\n",big);
		
	}
	return 0;
}
