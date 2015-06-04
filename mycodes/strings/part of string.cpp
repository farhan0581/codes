#include<stdio.h>
#include<string.h>
int main()
{
    char *a;
    char w[100];
    int start,end;
	printf("enter the string:\n");
	gets(w);
	printf("enter the start and end:\n");
	scanf("%d%d",&start,&end);
	a=w+(start-1);
	*(a+(end-start+1))='\0';
	puts(a);
	return 0;
	
}
