#include<stdio.h>
int main()
{
	char a[5]={'8','1','5','7','9'};
	int i;
	for(i=0;i<5;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{
							a[i]='O';
						}
						
}
for(i=0;i<5;i++)
{
	printf("%c",a[i]);
}
return 0;
}
