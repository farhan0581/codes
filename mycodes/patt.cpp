#include<stdio.h>
int main()
{
	int a[50],j,k,n,c=0;
	int i,z,t=0;
	scanf("%d",&z);
	while(t<z)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(k==0)
		{
			for(j=0;j<n;j++)
			{
				if(a[j]%2==0)
				{
					c++;
				}
			}
			if(c==n)
			{
				printf("NO\n");
			//	return 0;
			}
			else
			{
				printf("YES\n");
				//return 0;
			}
		}
		else
		{
		
		for(j=0;j<n;j++)
		{
			if(a[j]%2==0)
			{
				while(a[j]%2==0)
				{
					j++;
					c++;
				}
				if(c>=k)
				{
					printf("YES\n");
					return 0;
				}c=0;
			}
		}printf("NO\n");
		}
		t++;
	}
	return 0;
}
