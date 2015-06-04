#include<stdio.h>
#include<conio.h>
//#include<string.h>
int main()
{
	int i,s,b[5];
	char a[10];
	printf("enter the characters");
	for(i=1;i<5;i++)
	{
		a[i]=getchar();
		b[i]=a[i]-48;
		//printf("%d\t",s);
	}
	for(i=1;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
//	s=a[4]-a[3];
//	printf("%d",s);
	return 0;
}
