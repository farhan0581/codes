#include<stdio.h>
int main()
{
	int ctr=0,a[4],b[4],i,j;
	char s[10][10];
	char ch;
	FILE *fp;
	fp=fopen("a.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		if(ch=='\n')
		ctr++;
	}	ctr++;
	fseek(fp,0,0);
	for(j=0;j<ctr;j++)
	{
		fscanf(fp,"%s",s[j]);
	//	fscanf(fp,"%d",&a[j]);
	//	fscanf(fp,"%d",&b[j]);
	}
	for(i=0;i<ctr;i++)
	{
		printf("%s",s[i]);
	
	}
	return 0;
}
