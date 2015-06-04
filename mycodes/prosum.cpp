#include<stdio.h>
int main()
{
	long long int n,a[100009],one=0,two=0,zero=0,i,sum=0;
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%lld\n",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]==1)
			one++;
			if(a[i]==2)
			two++;
			if(a[i]==0)
			zero++;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			one--;
			if(a[i]==0)
			zero--;
			if(a[i]>2)
			{
				sum=sum+(n-i-1-one-zero);
			}
			if(a[i]==2)
			{
				two--;
				sum=sum+(n-i-1-one-two-zero);
			}
		}
		printf("%lld\n",sum);
		sum=0;
		one=0;two=0;zero=0;
		
	}
	return 0;
}
