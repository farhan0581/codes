#include<stdio.h>
int main()
{
	long long int i,n,m,c1,c2,c3,sum=0,p=1,temp,big=0;
	static long long int a[100005],fact[10000007];
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		if(big<a[i]&&(a[i]<m))
		big=a[i];
	}
	for(i=1;i<=big+1;i++)
	{
		p=((p%m)*(i%m))%m;
		if(p<0)
		p=p+m;
		fact[i]=p;
		//printf("%lld ",fact[i]);
	}
	for(i=1;i<=n;i++)
	{
		temp=a[i];
		if((a[i]+1)>=m)
		{
			c1=-(1%m);
			if(a[i]%2==0)
			{
				temp=a[i]/2;
				c2=(((temp%m)*(a[i]%m))%m*((a[i]+1)%m))%m;
			}
			
			else
			{
				temp=(a[i]+1)/2;
				c2=(((temp%m)*(a[i]%m))%m*(a[i]%m))%m;
			}
			
			c3=(c2+c1)%m;		
		}
		else
		{
			c1=((fact[a[i]+1])-(1%m))%m;
			if(a[i]%2==0)
			{
				temp=a[i]/2;
				c2=(((temp%m)*(a[i]%m))%m*((a[i]+1)%m))%m;
			}
			
			else
			{
				temp=(a[i]+1)/2;
				c2=(((temp%m)*(a[i]%m))%m*(a[i]%m))%m;
			}
			c3=(c2+c1)%m;
		}
		sum=(sum+c3)%m;
	}
	sum=sum%m;
	if(sum<0)
	sum=sum+m;
	printf("%lld\n",sum);
	return 0;
	
}
