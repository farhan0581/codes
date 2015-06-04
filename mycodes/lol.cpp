#include<stdio.h>
int main()
{
	char a='5',b='6',q[10];
	
	char c;int d;
	printf("enter digits");
	gets(q);
	d=(q[3]-48)*(q[4]-48);
	
	printf("%d",d);
	return 0;
}
