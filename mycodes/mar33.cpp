#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	static long long int i,t,b,g,d,c,k,j,l,m,n,cost1,cost2,odd[2][100005],even[2][100005];
	char a[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&d);
		scanf("%s",a);
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]=='B')
			b++;
			else
			g++;
	    }
	    if(abs(b-g)>1)
	    printf("-1\n");
	    else
	    {
	    	if(d==0)
	    {
	    	for(i=0;i<n;i=i+2)
	    	{
	    		if(a[i]!='B')
	    		j++;
	    		else if(a[i]!='G')
	    		k++;
	    	}
	    	if(b-g==1)
	    	printf("%lld\n",j);
	    	else if(b-g==-1)
	    	printf("%lld\n",k);
	    	else if(b==g)
	    	{
	    		if(j<=k)
	    		printf("%lld\n",j);
	    		else 
	    		printf("%lld\n",k);
	    	}
	    }
	    else if(d>0)
	    {
	    	for(i=0;i<n;i++)
	    	{
	    		if(i%2==0)
					{
						if(a[i]!='B')
						{
							odd[0][j]=i;j++;
						}
	
						else if(a[i]!='G')
						{
							even[0][k]=i;
							k++;
						}
						
					}
				else if(i%2!=0)
					{
						if(a[i]!='G')
						{
							odd[1][l]=i;
							l++;
						}
						else if(a[i]!='B')
						{
							even[1][m]=i;
							m++;
						}
						
					}
	    	}
//	    	for(i=0;i<j;i++)
//	    	printf("%lld- ",odd[0][i]);
//	    	for(i=0;i<k;i++)
//	    	printf("%lld ",even[0][i]);
	    	
	    	if(b-g==1)
	    	{
	    		for(i=0;i<j;i++)
	    		{
	    			cost1=cost1+abs(odd[0][i]-odd[1][i]);
	    		}
	    		printf("%lld\n",cost1);
	    	}
	    	else if(b-g==-1)
	    	{
	    		for(i=0;i<m;i++)
	    		{
	    			cost2=cost2+abs(even[0][i]-even[1][i]);
	    		}
	    		printf("%lld\n",cost2);
	    	}
	    	
	    	else if(b==g)
	    	{
	    		for(i=0;i<j;i++)
	    		{
	    			cost1=cost1+abs(odd[0][i]-odd[1][i]);
	    		}
	    		for(i=0;i<m;i++)
	    		{
	    			cost2=cost2+abs(even[0][i]-even[1][i]);
	    		}
	    		if(cost1<=cost2)
	    		printf("%lld\n",cost1);
	    		else
	    		printf("%lld\n",cost2);
	    	}
	    	
	    }
	    }
	
	    
	   	b=0;g=0;cost1=0;cost2=0;j=0;k=0,l=0,m=0;
	}
	return 0;
}
