#include<stdio.h>
int fibo(int f);
int main()
{
	int i,n;
	printf("how many terms?\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",fibo(i));
	}
}

int fibo(int f)
{
	if(f==1)
	return 0;
	if(f==2)
	return 1;
	else
	return (fibo(f-1)+fibo(f-2));
}
