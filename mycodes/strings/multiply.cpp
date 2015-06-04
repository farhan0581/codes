#include<stdio.h>
int main()
{
	long int i,m,n,s=0;
	printf("enter the value:\n");
	scanf("%d",&n);
	printf("with what?:\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		s=s+n;
	}
	printf("%d",s);
	return 0;
}
