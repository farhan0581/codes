#include<stdio.h>
int fact(int x);
int main()
{
	int a[100],b[100],i,n,j,c=0;
	printf("how many digits?\n");
	scanf("%d",&n);
	printf("now enter the digits\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1,j=0;i<n;i++)
	{
		if(a[i]!=b[j])
		{
			c++;j++;
			b[j]=a[i];
		}
	}
	printf("the possible combinations are %d",(fact(n)/fact(n-c)));
	return 0;
}
int fact(int x)
{
	if(x==0||x==1)
	return 1;
	else
	return x*fact(x-1);
}
