#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1000];
	long int i,t,n,total,sum,ans,tans,count;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%s",arr);
		scanf("%ld",&n);
		count=1;
		for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]=='T')
			count=count+2;
			else
			count=count+1;
		}
		total=12*n;
		sum=count;
		ans=0;
		while(sum<=total)
		{
			tans=total-sum+1;
			ans=ans+tans;
			sum=sum+count-1;
		}
		printf("%ld\n",ans);
	}
	return 0;
}
