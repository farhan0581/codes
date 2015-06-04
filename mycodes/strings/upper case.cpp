#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100];
	printf("enter the string:\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
		

	}
	puts(a);
	return 0;
}
