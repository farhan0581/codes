#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100009];
	int i;
	memset(a,'q',100009);
	for(i=0;i<1000;i++)
	printf("%c ",a[i]);
	return 0;
}
