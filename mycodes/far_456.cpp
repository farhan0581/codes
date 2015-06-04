#include<stdio.h>
int main()
{
	long long int k=0,i,o=0,tw=0,z=0,t,n,sum;
	scanf("%d",&t);
	
	while(k<t)
	{
		scanf("%d",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	    	
	
			if(a[i]==0)
			{
				z++;
			}
			else if(a[i]==1)
			{
				o++;
			}
			else if(a[i]==2)
			{
				tw++;
			}
		}
			
		
		sum=((n-z-o)*(n-z-o-1)/2)-(tw*(tw-1)/2);
		printf("%d\n",sum);
		k++;
	    
	}
	
	
     	return 0;
	
}

