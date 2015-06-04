#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[5][10],b[10],c[10];
	int i,n=0;
	printf("enter the string\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);
		n++;
	}fflush(stdin);
	printf("enter the culprit");
	gets(b);
	printf("enter the replacement");
	gets(c);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],b)==0)
		printf("%s\t",c);
		else
		printf("%s\t",a[i]);
	}
	return 0;
	
}
