#include<stdio.h>
#include<cmath>
int main()
{
	long long int i=0,j=0,c=0,t,x,y,h1,h2;
	scanf("%lld",&t);
	while(c<t)
	{
		scanf("%lld%lld",&x,&y);
		h1=log2(x),h2=log2(y);
			i=0;
			for(;;)
			{
				if(h1==h2)
				{
					if(x==y)
					{
					 break;	
					}
			    	x=x/2;y=y/2;
				   i+=2;
				}
				else if(h1>h2)
				{
				  x=x/2;
				  i++;
				  h1--;
				}
				else
				{
				  y/=2;
				  h2--;
				  i++;
				}
		   }
		printf("%lld\n",i);
		c++;
	}
//	printf("%f %f",log2(7),log2(23));
	return 0;
}
