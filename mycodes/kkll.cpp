#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long long int n,t,i,j,k,sum,start,end,c;
	long long int a[100000],p[100000],ng[100000];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			
	    }
	    c=0;j=0;k=0;sum=0;
	    for(i=0;i<n;i++)
	    {
	    	if(a[i]<0)
			{
				ng[j]=i;
				j++;
			}
			if(a[i]>=0)
			{
				p[k]=i;
				k++;
				c=c+a[i];
	    }
		}k=0;j=0;
		start=p[k];
		end=ng[j];
		while(c>0)
		{//printf("gh");
			if(abs(a[start])>abs(a[end]))
			{
				sum=sum+abs((start-end))*abs(a[end]);
				a[start]=a[start]+a[end];
				c=c+a[end];
				end=ng[++j];
			}
			if(abs(a[start])<abs(a[end]))
			{
				sum=sum+abs((start-end))*abs(a[start]);
				a[end]=a[end]+a[start];
				c=c-a[start];
				start=p[++k];
			}
			if(abs(a[start])==abs(a[end]))
			{
				sum=sum+abs((start-end))*abs(a[start]);
				c=c-a[start];
				start=p[++k];
				end=ng[++j];
			}
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}
