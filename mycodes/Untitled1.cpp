#include<stdio.h>
#include<string.h>
void replace(char a[],char b[],char c[],int st,int ed);
int main()
{
	int i,j,st=0,ed=0;
	char a[100],b[10],c[10];
	printf("enter the string:\n");
	gets(a);
	printf("enter the word to replace:\n");
	gets(b);
	printf("enter the word to enter\n");
	gets(c);
	for(i=0;i<=strlen(a);)
	{
		while(a[i]!=' '||a[i]!='\0')
		{
			ed++;i++;
		}
		if(a[i]==' '||a[i]=='\0')
		{
			replace(a,b,c,st,ed);
		}
		st=ed+1;
		ed=st;
	}
	
	return 0;
}
void replace(char a[],char b[],char c[],int st,int ed)
{
	int i,j,k;
	for(i=st,k=0;i<ed;)
	{
		if(a[i]==b[k])
		{
			k++;i++;
		}
		else
		for(j=st;j<ed;j++)
		{
			printf("%c",a[j]);
		}
		if(i==ed)
		puts(c);
	}
	
}
