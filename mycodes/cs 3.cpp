#include<stdio.h>
#include<string.h>
int main()
{
	long long int z=0,t;
	int c=0,i,j;
	char a[150],b[30],x=' ';
	scanf("%lld",&t);
	while(z<t)
	{
		fflush(stdin);
		gets(b);
		gets(a);
		for(j=0;j<strlen(b);j++)
		{
			for(i=0;i<strlen(a);i++)
			{
				if(b[j]==a[i]&&a[i]!=x)
				{
					x=a[i];
					c++;
				}
			}
		}
		printf("%d\n",c);z++;c=0;
	}
	return 0;
}
