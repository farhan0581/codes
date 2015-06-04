#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a,b,c=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if((i+j)%2!=0)
			c++;
		}
	}
	printf("%d",c);
	return 0;
	
}
