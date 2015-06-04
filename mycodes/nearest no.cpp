#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=3;i<a/2;i++)
	{
		if(a%i==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
