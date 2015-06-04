#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int t,b=0,r=0,s,e,l,f=0;
	char a[100009];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%s %lld %lld",a,&s,&e);
		if(strcmp(a,"Qb")==0)
		{
			
			while(s!=e)
			{
				if(s<e)
				{
				
					l=(long long int)log2(e)+1;
				
					if(l%2==0&&f==1)
					b++;
					else if(l%2!=0&&f==0)
					b++;
				
					e=e/2;
				}
				if(s>e)
				{
					
					l=(long long int)log2(s)+1;
				
					if(l%2==0&&f==1)
					b++;
					else if(l%2!=0&&f==0)
					b++;
				
					s=s/2;
				}
				if(s==e)
				break;
			}
			l=(long long int)log2(s)+1;
				
					if(l%2==0&&f==1)
					b++;
					else if(l%2!=0&&f==0)
					b++;
			
			
				printf("%lld\n",b);
			
			
			
		}
		else if(strcmp(a,"Qr")==0)
		{
						
			while(s!=e)
			{
				if(s<e)
				{
				
					l=(long long int)log2(e)+1;
					if(l%2==0&&f==0)
					r++;
			
					else if(l%2!=0&&f==1)
					r++;
						e=e/2;
				}
				if(s>e)
				{
					
					l=(long long int)log2(s)+1;
					if(l%2==0&&f==0)
					r++;
			
					else if(l%2!=0&&f==1)
					r++;
					s=s/2;
				}
		
			}
			l=(long long int)log2(e)+1;
					if(l%2==0&&f==0)
					r++;
			
					else if(l%2!=0&&f==1)
					r++;
			printf("%lld\n",r);
			
			
			
		}
		else if(strcmp(a,"Qi")==0)
		{
			if(f==0)
			f=1;
			else if(f==1)
			f=0;
		}
		r=0;b=0;
	}
	
	
}
