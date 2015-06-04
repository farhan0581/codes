#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0,c=0;
	char a[100],b[10];
	printf("enter the string:\n");
	gets(a);
	printf("enter the word to search:\n");
	gets(b);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[0]||a[i-1]==' '&&a[i+(strlen(b))]==' '||a[i+(strlen(b))]=='\0')
		{
			for(j=0;j<strlen(b);j++,i++)
			{
				if(a[i]==b[j])
				c++;
			}
			if(c==strlen(b))
			count++;
		}c=0;
		
	}
	printf("%s appears %d times",b,count);
	return 0;
}
