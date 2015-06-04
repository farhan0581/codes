#include<stdio.h>
int main()
{
	int t,r,g,b,m,i;
	long long int a1[105],a2[105],a3[105],b1=1,b2=1,b3=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&r,&g,&b,&m);
		b1=1,b2=1,b3=1;
		for(i=0;i<r;i++)
		{
			scanf("%lld",&a1[i]);
			if(b1<a1[i])
			b1=a1[i];
		}
		for(i=0;i<g;i++)
		{
			scanf("%lld",&a2[i]);
			if(b2<a2[i])
			b2=a2[i];
		}
		for(i=0;i<b;i++)
		{
			scanf("%lld",&a3[i]);
			if(b3<a3[i])
			b3=a3[i];
		}
		for(i=0;i<m;i++)
		{
			if(b1>=b2&&b1>=b3)
			b1=b1/2;
			else if(b2>b1&&b2>=b3)
			b2=b2/2;
			else
			b3=b3/2;
		}
		if(b1>=b2&&b1>=b3)
		printf("%lld\n",b1);
		else if(b2>b1&&b2>=b3)
		printf("%lld\n",b2);
		else
		printf("%lld\n",b3);
	}
	
	return 0;
}
