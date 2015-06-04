#include<stdio.h>
int fact(int a);
int main()
{
	int n,f;
	printf("enter the value to calculate:\n");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int fact(int a)
{
	if(a==0)
	return 1;
	else
	return a*(fact(a-1));
	return fact(a);
}
