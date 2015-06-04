#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	static long long int i,t,b,g,d,c,k,j,l,m,cost1,cost2,sum1,sum2,sum3,sum4;
	char a[100005];
	scanf("%lld",&t);
	while(t--)
	{
		k=1;j=1;l=1;m=1;
		scanf("%lld",&d);
		scanf("%s",a);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='B')
			b++;
			else
			g++;
						if(i%2==0)
						{
							if(a[i]!='B')
							{
								sum1=sum1+i;
								j++;	
							}
							else if(a[i]!='G')
							{
								sum3=sum3+i;
								l++;
							}
							
						}
						else if(i%2!=0)
						{
							if(a[i]!='G')
							{
								sum2=sum2+i;
								k++;
							}
							else if(a[i]!='B')
							{
								sum4=sum4+i;
								m++;
							}
							
						}
						
			
	    }

	    
	    if(abs(b-g)>1)
	    {
	    	printf("-1\n");
	    }
	    else
	    {
		    if(d==0)
		    {
		    	if(b-g==1)
		    	printf("%lld\n",j-1);
		    	else if(b-g==-1)
		    	printf("%lld\n",l-1);
		    	else if(b==g)
		    	{
		    		if(j<=l)
		    		printf("%lld\n",j-1);
		    		else
		    		printf("%lld\n",l-1);
		    	}
		    }
		    else
		    {
		    	if(b-g==1)
		    	{
		    		cost1=abs(sum1-sum2);
		    		printf("%lld\n",cost1);
		    	}
		    	else if(b-g==-1)
		    	{
		    		cost2=abs(sum3-sum4);
		    		printf("%lld\n",cost2);
		    	}
		    	else if(b==g)
		    	{
		    		cost1=abs(sum1-sum2);
		    		cost2=abs(sum3-sum4);
		    		if(cost1<=cost2)
		    		printf("%lld\n",cost1);
		    		else
		    		printf("%lld\n",cost2);
		    	}
		    }
	    
	    }
	    
	   	b=0;g=0;cost1=0;cost2=0;j=1;k=1;l=1;m=1,sum2=0,sum1=0,sum4=0,sum3=0;
	}
	return 0;
}
