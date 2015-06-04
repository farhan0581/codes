#include<stdio.h>
int main()
{
	static long long int a[100005],t,n,m,o,i,c;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&n,&m,&o);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(i!=0&&a[i]>=o)
			c++;
		}
		if(a[0]<o)
		printf("-1\n");
		else
		{
			if(c>=m)
			printf("%lld\n",m);
			else
			printf("%lld\n",c+1);
			
		}
		c=0;
	}
	return 0;
}
