#include<stdio.h>
int main()
{
	long int a,n;
	scanf("%lld",&a);
	if(a%3==0)
	{
		printf("yes");
		return 0;
	}
	else
	{
		a=a-1;
		if(a%3==0)
		{
			n=a/3;
			if(n%2==0)
			{
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
