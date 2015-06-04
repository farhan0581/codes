#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=1;
	char a[100];
	printf("enter the string:\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=a[++i])
		{
			printf("%c%d",a[i],c);
		}
		c=1;
		if(a[i]==a[++i])
		{
			c++;
			i++;
			
		}
		printf("%c%d",a[i-1],c);
		c=1;
	}
	return 0;
}
