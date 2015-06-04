#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,t,d=0,level=1;
	long long int c;
	char a[1000000];
	scanf("%d\n",&t);
	for(d=0;d<t;d++)
	{
	    scanf("%s",a);
	   fflush(stdin);
	    c=1;level=1;
		for(i=0;i<strlen(a);i++)
		{
			if(level%2==0)
			{
				if(a[i]=='l')
				{
					c=c*2-1;	
				}
				else
				{
					c=c*2+1;	
				}
			}
			else
			{
				if(a[i]=='l')
				{
					c=c*2;	
				}
				else
				{
					c=c*2+2;	
				}	
			}level++;
			if(c>1000000007)
			c=c%1000000007;
		}
	    printf("%lld\n",c%1000000007);
	}
	return 0;
}
