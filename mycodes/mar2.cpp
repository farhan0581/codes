#include<stdio.h>
#include<math.h>
int main()
{
	long long int sine,cosine=0,s,c,k,d,result,t,level,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&s,&c,&k);
		//s++;k++;
		level=s-k;
		if(level>=0)
		{
			sine=pow(2,level+1)+1;
		}
		else if(level<0)
		{
			sine=0;
		}
		
		d=k-1;
		if(d==0&&(c-s)>=0)
		{
			for(i=s;i<=c;i++)
			{
				cosine=cosine+pow(2,i);
			}
		}
		else
		{
			if(d>=1&&c>=d)
			{
				cosine=pow(2,d);
			}
		}
		
		result=sine+cosine;
		printf("%lld\n",result);
		cosine=0;
	}
	return 0;
}
