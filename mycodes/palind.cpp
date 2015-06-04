#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000],b[10000];
	int i,j;
	printf("enter the string\n");
	scanf("%s",a);
	//printf("%s",strrev(a));
	for(i=0,j=strlen(a)-1;i<strlen(a),j>=0;)
	{
		if(a[i]==a[j])
		{
			i++;j--;
		}
		else
		{
			printf("SORRY NOT A PALINDROME\n");
			break;
		}
		
	}
	if(i==strlen(a))
	printf("YA A PALNIDROME\n");

	return 0;
}
