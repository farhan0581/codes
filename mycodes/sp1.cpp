#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*b;
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		for(i=0,j=strlen(a)-1;i<strlen(a);i++,j--)
		{
			if(a[i]!=a[j])
			break;
	   }
	   if(i==strlen(a))
	   printf("YES\n");
	   else
	   printf("NO\n");
	}
	return 0;
}
