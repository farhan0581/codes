#include<stdio.h>
int main()
{
	int i=2,n,x=3;
	printf("how many primes?\n");
	scanf("%d",&n);
	printf("%d",2);
    int d=1;
    while(d<n)
    { 
       	
	 for(i=2;i<x;)
	  {
		if(x%i==0)
		{
		  break;
	    }
	   else
		i++;
		}
		if(i==x)
		{
		printf("\t%d",x);
		d++;
		}x++;
	}
	
}

