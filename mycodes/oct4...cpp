#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,i,j,n,y,m,p=1,d,M=1000000009,flag=0,i1,i2;
	char a[100009],x,s1,s2;
    memset(a,'q',100009);

     	scanf("%lld",&t);

	while(t--)
	{   
		scanf("%lld %lld",&n,&m);
		memset(a,'q',n);
		for(i=1;i<=m;i++)
		{
				fflush(stdin);
			scanf("%c %lld",&x,&y);
			a[y]=x;
		
			
		}
		
		p=1;flag=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]!='q'&&flag==0)
			{
				i1=i;
				s1=a[i];
				flag=1;
			//	i++;
			}
			 else if(a[i]!='q'&&flag==1)
			{
				i2=i;
				s2=a[i];
				if(s1!=s2&&(i2-i1)!=1)
				{
					d=i2-i1;
			        p=(p%M)*(d%M);
			        if(p>1000000009)
			        p=p%M;
				}
				i1=i2;
				s1=s2;
				flag=1;
			}
		}
		p=p%M;
		printf("%lld\n",p);
	    
		
	}
	return 0;
}
