#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],t[2];
	int i,j,k,start=0,end=0;
	printf("enter the string:\n");
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
	
	if(a[i]==' '||a[i]=='\0')
	{
	
	for(j=start;j<(end-1);j++)
	{
		for(k=j+1;k<end;k++)
		{
			if(a[j]>a[k])
			{
				t[0]=a[j];
				a[j]=a[k];
				a[k]=t[0];
			}
		}
		
	}
	start=end+1;
	end=start;
	
    }
    else
    end++;
}
     puts(a);
	 return 0;   

}
