#include<stdio.h>
#include<string.h>
int check(int x,int y);
char a[100],b[20],c[20];
int main()
{
	int start=0,end=0,i;
	printf("enter the string\n");
	gets(a);
	printf("enter the culprit\n");
	gets(b);
	printf("enter the replacement\n");
	gets(c);
	for(i=0;i<strlen(a);i++)
	{
		while(a[i]!=' '||a[i]!='\0')
		{
			end++;i++;
		}
		check(start,end);
		start=end+2;
		end=start;
	}
	return 0;
}
int check(int x,int y)
{
	int i,j;
	for(i=x,j=0;i<=y,j<strlen(b);)
	{
		if(a[i]==b[j])
		{
			i++;j++;
		}
		else
		{
			for(i=x;i<=y;i++)
			{
		
			printf("%c",a[i]);
		    }
		    return 0;
		}
	}
	puts(c);
	return 0;
	
}
