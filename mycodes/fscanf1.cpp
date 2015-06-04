#include<stdio.h>
int main()
{
	FILE *f;
	char a[10],p[10],*po;
	int b,c,br[5],pr[5],i=0;
	po=p;
	f=fopen("a.txt","r");
	while(fscanf(f,"%s %d %d",a,&b,&c)!=EOF)
	{
		
		br[i]=b;
		pr[i]=c;
		i++;
	}
	fclose(f);
	return 0;
}
