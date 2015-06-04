#include<stdio.h>
int main()
{
	long long int p,q,n,k;
	int t,c=1;
	scanf("%d",&t);
	while(c<=t)
	{
		scanf("%lld%lld",&n,&k);
		if(n==0)
		{
			printf("0\t0\n");
		}
		 else if(k==0)
		 {
		 	printf("0\t%lld\n",n);
		 }
		 else 
		 {
		 	p=n%k;
	     	q=n/k;
		
	     	printf("%lld\t%lld",q,p);
	     	printf("\n");
		}
	
		c++;
	}
	return 0;
}
