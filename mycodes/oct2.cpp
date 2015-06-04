#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	 long int n,t,i,j,k,sum,start,end,c,a[100009],po[100009],ng[100009];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		c=0;j=0;
		k=0;sum=0;
		
		for(i=0;i<n;i++)
		{
			scanf("\n%ld",&a[i]);
				if(a[i]<0)
			{
				ng[j++]=i;
				
			}
		   else	if(a[i]>=0)
			{
				po[k++]=i;
				
				c=c+a[i];
	        }
			
	    }
	    
	   
		start=po[0];
		end=ng[0];
		j=1;k=1;
		while(c>0)
		{
			if(a[start]>abs(a[end]))
			{
				sum=sum+(abs((start-end))*abs(a[end]));
				a[start]=a[start]+a[end];
				c=c+a[end];
				a[end]=0;
				end=ng[j++];
			}
			if(a[start]<abs(a[end]))
			{
				sum=sum+(abs((start-end))*a[start]);
				a[end]=a[end]+a[start];
				c=c-a[start];
				a[start]=0;
				start=po[k++];
			
			}
			if(a[start]==abs(a[end]))
			{
				sum=sum+(abs((start-end))*a[start]);
				c=c-a[start];
				a[start]=0;
				a[end]=0;
				start=po[k++];
				end=ng[j++];
			}
		}
		printf("%ld\n",sum);
	}
	
	return 0;
}
