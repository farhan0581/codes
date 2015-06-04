#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		a[i]=0;
	}
	for(i=0;i<n*n;)
	{
		a[i]=i+1;
		i=i+n+1;
	}
	for(i=n-1;i<n*n;)
	{
		a[i]=i+1;
		i=i+n-1;
	}
	for(i=0;i<n*n;i++)
	{
		if(a[i]==0)
		a[i]=n*n-i;
	}
	for(i=0;i<n*n;i++)
	{
		printf("%d\t",a[i]);
		if((i+1)%n==0)
		printf("\n");
	}
	return 0;
}
