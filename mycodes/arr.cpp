#include<stdio.h>
int main()
{
	int z=0,t,i,j=0,c=0,a[200],b[200],n,k,l,big;
	scanf("%d",&t);
	while(z<t)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
			c++;
			else
			{
				b[j]=c;j++;
				c=0;
			}
		}
		b[j]=c;
		big=b[0];
		for(l=0;l<=j;l++)
		{
			if(big<=b[l])
			big=b[l];
		}
		if(big>=k)
		printf("yes\n");
		else
		printf("no\n");
		j=0;c=0;
		z++;
	}
	return 0;
}
