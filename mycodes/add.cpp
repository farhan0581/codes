#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f;
	char a;
	f=fopen("farhan.txt","a+");
	printf("start enterimng");
	while((a=getchar())!='\n')
	{
		putc(a,f);
		
	}
	fclose(f);
	return 0;
}
