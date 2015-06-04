#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,z=0;
	int a,b,small,big,c;
	fflush(stdin);
	scanf("%d",&t);
	while(z<t)
	{
		scanf("%d%d",&a,&b);
		printf("%d%d",a,b);printf("hfgh");
		if(a>=b)
		{
			big=a;
			small=b;
		}
		else 
		{
			big=b;small=a;
		}
		if(big%2==0)
		{
			c=(big/2)*small;
		}
		else
		{
			c=((big+1)/2*(small/2))+((big/2)*(small/2));
		}
	//	printf("%d",c);
//	printf("%d%d",big,small);
	z++;
		
	}
	return 0;
}
