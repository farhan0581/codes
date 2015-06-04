#include<stdio.h>
#include<math.h>
int main()
{
     long long int t,s,c,k,i,n,sum;
    static long long int a[500];
	scanf("%lld",&t);
	while(t--)
	{    
    	scanf("%lld %lld %lld",&s,&c,&k);
	    if(s>=c)
	    {  n=s;}
	    else
	    { n=c;}
	        sum=0;
	       for(i=0;i<=n;i++)
	       {
	       	a[i]=0;
	       }
	       for(i=0;i<=n&&s>0;i++)
	       {
		    a[i]=s--;
	       }
	       for(i=1;i<=c;i++)
	       {
		     a[i]=a[i]+1;
	       }
	       for(i=1;i<=n;i++)
	       {
		     if(a[i]>=k)
		      {  
		       sum=sum+pow(2,i);
		      }
	       }
	       if(a[0]>=k)
	       {   sum=sum+3;
	       }
	       printf("%lld\n",sum);
    } 
	return(0);
}  
