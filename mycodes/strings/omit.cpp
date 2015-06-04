#include<stdio.h>
#include<string.h>
void farhan(int a,int b);
int main()
{
	int i,j,count=0,end=0,start=0,k,c=1;
	char a[100],b[10];
	printf("enter the string:\n");
	gets(a);
	printf("enter the word to omit:\n");
	gets(b);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[0])
		{  
		     j=i;
		     
		
		if(a[j]==b[0]&&a[j+(strlen(b))]==' '||a[j+(strlen(b))]=='\0'||a[j-1]==' ')
		{
			for(k=0;k<strlen(b);k++,j++)
			{
				if(a[j]==b[k])
				c++;   
			}
			if(c==strlen(b))
			j++;
			else
			for(j=i;a[j]!=' '||a[j]!='\0';j++)
			{
				printf("%c",a[j]);
			}
			c=1;
			i=j;
	    }
	    }
	    else
	    printf("%c",a[i]);

	}

return 0;
}
