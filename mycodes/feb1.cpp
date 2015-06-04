#include<stdio.h>
#include<string.h>
int main()
{
	long int i,c1=0,c2=0,l,t;
	char a[100005];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%s",&a);
		l=strlen(a);
			for(i=0;i<l;i++)
			{
				if(i%2==0&&a[i]!='-')
				{
					c1++;
				}
				else if(i%2!=0&&a[i]!='+')
				c1++;
			}	
		
			for(i=0;i<l;i++)
			{
				if(i%2==0&&a[i]!='+')
				c2++;
				else if(i%2!=0&&a[i]!='-')
				c2++;
			}
		if(c1<=c2)
		printf("%ld\n",c1);
		else
		printf("%ld\n",c2);
		c1=0;c2=0;
	}
	return 0;
}
