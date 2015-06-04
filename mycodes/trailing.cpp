#include<stdio.h>
#include<string.h>
int main()
{
	int st,ed,i;
	char a[20];
	printf("enter the string");
	gets(a);
	st=0;
	ed=strlen(a)-1;
	
	while(a[ed]=='0')
	{
		ed--;
	}
	while(a[st]=='0')
	{
		st++;
	}
	if(a[ed]=='.')
	{
		ed--;
	}
	for(i=st;i<=ed;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
