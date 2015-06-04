#include<stdio.h>
#include<string.h>
int main()
{

	int i,c=0,n;
	char a4[10][20]={" ","one thousand","two thousand","three thousand","four thousand","five thousand","six thousand","seven thousand","eight thousand","nine thousand"};
	char a3[10][20]={" ","one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred","eight hundred","nine hundred"};
	char a2[10][20]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	char a1[10][20]={" "," ","two","three","four","five","six","seven","eight","nine"};
	char a0[10][20]={" ","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char a[10];
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n<=9999&&n>=1000)
	{
		i=n/1000;
		printf("%s\t",a4[i]);
		n=n%1000;
	}
	if(n<=999&&n>=100)
	{
		i=n/100;
		printf("%s\t",a3[i]);
		n=n%100;
	}
	if(n<=99&&n>=20)
	{
		i=n/10;
		printf("%s\t",a2[i]);
		n=n%10;
	}
	if(n>=11&&n<=19)
	{
		i=n%10;
		printf("%s\t",a0[i]);
	}
	i=n;
	printf("%s\t",a1[i]);
	
	
	return 0;
}
