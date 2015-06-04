#include<stdio.h>
int main()
{
	int n,i=0,w[12];
	char e[12][3],v[12];
	FILE *fp;
	fp=fopen("ed.txt","r");
	while(fscanf(fp,"%c%d",&v[i],&w[i])!=EOF)
	{
		i++;
	}
	printf("how many edges??\n");
	scanf("%d",&n);
	return 0;
}
