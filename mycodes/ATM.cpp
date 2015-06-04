#include<stdio.h>
int main()
{
	float n,m,a;
	scanf("%f%f",&n,&m);
	if((int)n%5==0&&n<=(m-0.50))
	{
		a=m-n-0.50;
		printf("%0.2f",a);
	}
	else
	printf("%0.2f",m);
	return 0;
	
	
}
