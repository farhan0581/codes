#include<stdio.h>
#include<string.h>
int main()
{
	char a[100005];
	long int i,l,s,e;
	int t,c=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("\n%s",a);
		l=strlen(a)-1;
		if(l%2==0)
		{
			for(s=0,e=l;s<l/2,e>l/2;s++,e--)
			{
				if(a[s]!=a[e])
				{
					if(a[s]==a[e-1])
					{
						e--;
						c++;
					}
					else if(a[s+1]==a[e])
					{
						s++;c++;
					}
					else
					{
						printf("NO\n");c=2;
						break;
					}
				}
				if(c>1)
				{
					printf("NO\n");
					break;
				}
			}
			
		}
		else
		{	 
				for(s=0,e=l;s<=l/2,e>l/2;s++,e--)
			{
				if(a[s]!=a[e])
				{
						if(a[s]==a[e-1])
					{
						e--;
						c++;
					}
					else if(a[s+1]==a[e])
					{
						s++;c++;
					}
					else
					{
						printf("NO\n");c=2;
						break;
					}
				}
				if(c>1)
				{
					printf("NO\n");
					break;
				}
				
			}
			
		}
		if(c<=1)
		printf("YES\n");
		c=0;
	}
	return 0;
}
