#include<conio.h>
#include<stdio.h>
int main()
{
	int i=0,n=4,ch;
	while(i<n)
	{
	 	printf("Enter the element");
	 	//scanf("%d",&ch);
	 	if(ch==NULL)
	 	{
	 		ch=9;
	 	}
	 	scanf("%d",&ch);
	 	printf("%d",ch);
	 	i++;
	}
}
