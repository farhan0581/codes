#include<stdio.h>
int fact(int a);
int main()
{
	long long int i,n,f=1;
	printf("enter the no");
	scanf("%lld",&n);
	printf("%lld\n",fact(n));
	return 0;
}
int fact(int a)
{
	if (a==1)
	return 1;
	return fact(a-1)*a;
	printf("here\n");

}
