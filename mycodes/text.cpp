#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	FILE *fk;
	fk=fopen("farhan.txt","w");
	printf("enter the text to enter the file");
	while((a=getchar())!='\n')
	putc(a,fk);
	fclose(fk);
	return 0;
}


