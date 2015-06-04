#include<stdio.h>
#include<stdlib.h>
int main()
{
	char m1[3],m2[3][3];
	int a[3],i;
	for(i=0;i<3;i++)
	{
		scanf("%c %d",&m1[i],&a[i]);fflush(stdin);

	}
	for(i=0;i<3;i++)
	{
		printf("%c %d\n",m1[i],a[i]);

	}
	
	return 0;
}
