#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
	printf("enter the string:\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
	
	if(a[i]!=' ')
	{
		printf("%c",a[i]);
		
	}
}
return 0;
}
	
	
	
	

