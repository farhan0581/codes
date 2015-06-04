#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,p;
	printf("enter the string:\n");
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
			if(a[i]==' ')
		{
			while(a[i]==' ')
			i++;
	    }
	   
	
	    while(a[i]!=' ')
	    {
	    
	    printf("%c",a[i]);
	    i++;
	    if(a[i]=='\0')
	    break;
	    }
	     printf(" ");
	    
	}
	return 0;
}
