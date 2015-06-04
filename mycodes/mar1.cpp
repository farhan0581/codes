#include<stdio.h>
int main()
{
	long int t,x,y,n,k,p[100005],c[100005],req,count=0,i;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld %ld %ld",&x,&y,&k,&n);
		req=x-y;
		for(i=0;i<n;i++)
		{
			scanf("%ld %ld",&p[i],&c[i]);
		}
		for(i=0;i<n;i++)
		{
			if(p[i]>=req&&c[i]<=k)
			{
				count++;
				break;
			}
		}
		if(count>0)
		{
			printf("LuckyChef\n");
		}
	
		else
		{
			printf("UnluckyChef\n");
		}
		
		count=0;
		
	}
	return 0;
}
