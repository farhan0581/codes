#include<stdio.h>
int main()
{
	long long int t,i,j,n,y,m,a[100009];
	long long int p=1,d,M=1000000009;
	char z[100009];
	scanf("%lld",&t);
	while(t--)
	{   
		scanf("%lld %lld",&n,&m);
		p=1;
		for(i=1;i<=m;i++)
		{
			fflush(stdin);
			scanf("%c%lld",&z[i],&a[i]);
			
		}
		for(i=1,j=2;i<=m,j<=m;i++,j++)
		{
			if((a[j]-a[i])!=1&&z[i]!=z[j])
			{
				d=a[j]-a[i];
			    p=((p%M)*(d%M))%M;
			}
		}
		printf("%lld\n",p%M);
	}
	return 0;
}
