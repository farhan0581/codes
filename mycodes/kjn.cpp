#include<stdio.h>
#include<stdlib.h>
int main()
{
	float sum=0,av,n,z=0,t,a[100];
	int i,c=0;
	scanf("%f",&t);
	while(z<t)
	{
		scanf("%f",&n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&a[i]);
			sum=sum+a[i];
		}
		av=sum/n;
		for(i=0;i<n;i++)
		{
			if(a[i]>av)
			c++;
		}
		printf("%d\n",c);
		z++;c=0;sum=0;
	}
	return 0;
}
