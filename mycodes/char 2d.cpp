#include<stdio.h>
#include<string.h>
int main()
{  int i=0;
	char a[5][10],c;
	printf("enter");
	for(i=0;i<5;i++)
	{   
		scanf("%s",a[i]);
	}
	puts(a[3]);
	return 0;
}
