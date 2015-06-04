#include<stdio.h>
int main()
{
	long long int t,n,s,i,c=0;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&s);
		//for(i=1;i<=n;i++)
		//a[i]=1;
		
		s=s-n;
		for(i=2;i<=n;i++)
		{
			if(s>=i-1)
			{
				s=s-i+1;
				c++;
			}
			else
			break;
		}
		
		printf("%lld\n",n-c-1);
		c=0;
	}
	return 0;
}
