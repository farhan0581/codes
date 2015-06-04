#include<stdio.h>
int main()
{
	long long int x;
	scanf("%lld",&x);
	if(x%3==0)
	printf("yes");
	else if(x%3==1&&((x/3)%2==0))
	printf("yes");
	else
	printf("no");
	return 0;
}
