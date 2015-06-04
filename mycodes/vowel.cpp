#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f;
	char g,a,e,i,o,u,c;
	int count=0;
	f=fopen("farhan.txt","w+");
	printf("enter the text:\n");
	
		while((c=getchar())!='\n')
		{
		fputc(c,f);
	    }
	fclose(f);
	f=fopen("farhan.txt","r");
	
	while(!feof(f))
	{
		g=getc(f);
		if(g=='a'||g=='e'||g=='i'||g=='o'||g=='u')
		{
			count++;
		}
	}
	printf("theno of vowels are %d",count);
	fclose(f);
	f=fopen("farhan.txt","r");
	while((c=fgetc(f))!=EOF)
	{
		printf("\n%c",c);
		
	}
	fclose(f);
	return 0;
	
}
