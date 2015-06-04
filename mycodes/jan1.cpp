#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,a[100009],sum=0,i,c,x;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);x=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
			if(a[i]==0)
			x++;
		}c=0;
		n=n-x;
		if(sum<100)
		printf("NO\n");
		else
		{
			if(n<=10)
			c=1;
			else
			{
				if(n%10==0)
				{
					c=n/10;
				}
				else
				c=n/10+1;
			}
			sum=sum-n+c;
			if(sum<=100)
			printf("YES\n");
			else
			printf("NO\n");
			
		}
		sum=0;
		
		
	}
	return 0;
}
