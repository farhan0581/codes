#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][10],b[10],c[10];
	int i;
	printf("enter the string\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);
	}
	printf("enter the culprit");
	gets(b);
	printf("enter the replacement");
	gets(c);
	for(i=0;i<5;i++)
	{
		if(strcmp(a[i],b)==0)
		puts(c);
		else
		printf("%s",a[i]);
	}
	return 0;
	
}
