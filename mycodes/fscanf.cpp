#include<stdio.h>
int main()
{
	int b,c,pr[5],br[5],i=0;
	char a,s[5];
	FILE *f;
	f=fopen("a.txt","r");
	while(f!=EOF)
	{
		fscanf(f,"%s %d %d",&a,&b,&c);
		s[i]=a;
		br[i]=b;
		pr[i]=c;
		i++;
	}
	fclose(f);
	for(i=0;i<5;i++)
	{
		printf("%s\t%d\t%d",s[i],br[i],pr[i]);
	}
	return 0;
}
