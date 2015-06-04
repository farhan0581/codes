#include<stdio.h>
int main()
{int i;
	char a[5]={'l','y','t','4','e'};
	for(i=0;i<5;i++)
	{
		if(a[i]>=49&&a[i]<=57)
		{
		a[i]='x';
		break;}
	}
	printf("%c",a[i]);
	printf("\n%d",'l');
	return 0;
	
}
