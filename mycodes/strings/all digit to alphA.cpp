#include<stdio.h>
#include<string.h>
int main()
{	
    int i=0,j;
    long int n;
	char a[100];
	char w[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("\t%s",w[a[j]]);
	}
	return 0;
}
