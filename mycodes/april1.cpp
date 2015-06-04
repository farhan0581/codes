#include<stdio.h>
int main()
{
	static long long int t,n,a[100005],i,j,k,count;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		k=-1;
		for(i=0,j=1;i<n,j<n;i++,j++)
		{
			if(a[i]!=a[j])
			{
				if(k!=i)
				count=count+2;
				else if(k==i)
				count=count+1;
				k=j;
				
			}
			
		}
		printf("%lld\n",count);
		count=0;
	}
	return 0;
}
