#include<stdio.h>
int main()
{
	int z=0,t,i,j=0,c=0,a[200],b[200],n,k;
	scanf("%d",&t);
	while(z<t)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
			c++;
		}
		 if(k==0&&c==n)
		printf("NO\n");
		 else if(c>=k)
		printf("YES\n");
		else if(c<k)
		printf("NO\n");
		j=0;c=0;
		z++;
	}
	return 0;
}
