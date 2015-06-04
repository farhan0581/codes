#include<stdio.h>
int main()
{
	int t;
	static long long int a[100005],l[100005],i,x,c,n,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&q);
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld\n",&a[i],&l[i]);
		}
		while(q--)
		{
			scanf("%lld",&x);
			for(i=0;i<n;i++)
			{
				if(x>=a[i]&&x<=l[i])
				c++;
			}
			printf("%lld\n",c);
			c=0;
		}
	}
	return 0;
}
