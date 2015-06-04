#include<stdio.h>
int main()
{
	static int a[4],i;
	for(i=0;i<4;i++)
	printf("%d",a[i]);
	return 0;
}
