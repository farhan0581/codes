#include<stdio.h>
int check(int x);
int main()
{
	int c=0,t,x,y,p,a;
	scanf("%d",&t);
	while(c<t)
	{
		scanf("%d%d",&x,&y);
		p=x+y+1;
		a=check(p)-(x+y);
		printf("%d\n",a);
		c++;
	}
	return 0;
}
int check(int x)
{
	int i;
	for(i=2;i<=x/2;)
	{
		if(x%i==0)
		{
			x=x+1;
			i=2;
		}
		else
		i++;
	}
	return x;
}
