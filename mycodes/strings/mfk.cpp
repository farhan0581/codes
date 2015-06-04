#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *mfk,*ik;
	int ch;
	mfk=fopen("faizan.txt","r");
	ik=fopen("ilma.txt","w");
	while((ch=fgetc(mfk))!=EOF);
	{
		fputc(ch,ik);
	}
	fclose(mfk);
	fclose(ik);
	return 0;
}
