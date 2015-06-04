#include<stdio.h>
int main()
{
	int n,i=0,w[12]={1,2,3,4,5,6,7,8,9};
	char e[12][3],v[12]={'a','b','c','d','e','f','g','h','i'};
	
	printf("how many edges??\n");
	scanf("%d",&n);
/*	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c %c %d",&v[i][0],&v[i][1],&v[i][2]);
	}*/
	
	for(i=0;i<12;i++)
	{
		printf("%c %d",v[i],w[i]);
	}
	return 0;
}
