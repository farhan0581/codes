#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=1;
	char a[50],b[10];
	printf("enter the string:\n");
	gets(a);
	b[0]=a[0];
	for(i=1;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{   
			b[j]=a[++i];
			j++;
		
		}	
	}
	puts(b);
	return 0;
	
}
