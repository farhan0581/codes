#include<stdio.h>
void prime(int x);
int main()
{
	int i=2,c=1,n;
	printf("how many primes?\n");
	scanf("%d",&n);
	while(c<=50)
	{
		prime(i);
		i++;
		c++;
	}
}
void prime(int x)
{   
    int i;
	for(i=2;i<x;)
	{
		if(x%i==0)
		break;
		else
		i++;
	}
	if(i==x)
	printf("\t%d",x);
}
