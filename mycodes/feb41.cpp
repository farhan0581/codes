#include<stdio.h>
int main()
{
	long long int i,n,m,c1,c2,c3,sum=0,p=1,temp,big=0,s=0,p2;
	static long long int a[100005],fact[10000007];
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		if(big<a[i]&&(a[i]<m))
		big=a[i];
	}
	for(i=1;i<=big;i++)
	{
		
		p=((p%m)*(i%m))%m;
		p2=(p*i)%m;
		s=(s+p2)%m;
		fact[i]=s;
	}
	for(i=1;i<=n;i++)
	{
		temp=a[i];
		if((a[i])>=m)
		{
			c1=0;
			if(a[i]%2==0)
			{
				temp=a[i]/2;
				c2=((temp%m)*(a[i]%m)*((a[i]+1)%m))%m;
			}
			
			else
			{
				temp=(a[i]+1)/2;
				c2=((temp%m)*(a[i]%m)*(a[i]%m))%m;
			}
			
			c3=(c2)%m;		
		}
		else
		{
			c1=(fact[a[i]])%m;
			if(a[i]%2==0)
			{
				temp=a[i]/2;
				c2=((temp%m)*(a[i]%m)*((a[i]+1)%m))%m;
			}
			
			else
			{
				temp=(a[i]+1)/2;
				c2=((temp%m)*(a[i]%m)*(a[i]%m))%m;
			}
			c3=(c2+c1)%m;
		}
		sum=(sum+c3)%m;
	}
	if(sum<0)
	sum=sum+m;
	printf("%lld\n",sum%m);
	return 0;
	
}
