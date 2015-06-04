#include<stdio.h>
int main()
{
	int i,j=0,a[10],b[5];
	printf("enter first string\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second string\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}i=0;
	while(i<=5)
	{
		while(a[i]==b[j])
		{
			i++;
			j++;
			if(j==4)
			printf("yes");
		}
		i++;
		j=0;
		
	}
	if(i==6)
	printf("no");
	return 0;
	
}
