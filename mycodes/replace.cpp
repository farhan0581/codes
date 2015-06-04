#include<stdio.h>
#include<string.h>
void replace(char a[],char b[],char c[],int x,int y);
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
	for(i=0;i<strlen(a);i++)
	{
		while(a[i]!=' ')
		{
			ed++;
			i++;
		}//printf("\n1");
		if(a[i]==' ')
		{
			replace(a,b,c,st,ed);
			printf("%d\n%d",st,ed);
		}
			
		st=ed+1;//printf("far2");
	     ed=st;//printf("\n3");
	}
	
	return 0;
}
void replace(char a[],char b[],char c[],int x,int y)
{
	int i,j,k=0;
	i=x;
	//printf("%d\n%d",x,y);
		if(a[i]!=b[k])
		{  print:
		    	for(j=x;j<y;j++)
			{
				printf("%c",a[j]);
			}
		}
		
		else if(a[i]==b[k])
		{
			while(a[i]==b[k])
			{
				i++;
				k++;}
					if(i==y-1)
	               puts(c);
	               else
	               goto print;
			}
		}
	
	

