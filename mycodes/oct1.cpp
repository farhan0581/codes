#include<stdio.h>
int main()
{
	 int t,n,m,i,a[200],big,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
        big=0;
        sum=0;
        fflush(stdin);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>big)
			big=a[i];
		}
		for(i=0;i<n;i++)
		{
			sum=sum+(big-a[i]);
		}
		if(m==sum)
		{
			printf("Yes\n");
		}
	
		else if((m-sum)%n==0&&m!=sum)
		printf("Yes\n");
		
		else
		printf("No\n");
	}
	return 0;
}
