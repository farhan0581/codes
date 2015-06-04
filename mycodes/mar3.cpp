#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	static long long int i,t,b,g,d,c,odd[2][100005],even[2][100005],k,j,l,m,diff1,diff2,cost1,cost2;
	char a[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&d);
		scanf("%s",&a);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='B')
			b++;
			if(a[i]=='G')
			g++;
			if(i%2==0&&a[i]!='B')
			{
				odd[0][j]=i;j++;
			}
			if(i%2!=0&&a[i]!='G')
			{
				odd[1][k]=i;k++;
			}
			if(i%2==0&&a[i]!='G')
			{
				even[0][l]=i;l++;
			}
			if(i%2!=0&&a[i]!='B')
			{
				even[1][m]=i;m++;
			}
		}
		if(abs(b-g)>1)
		printf("-1\n");
		else
		{
			for(i=0;i<j;i++)
			{
				diff=odd[0][i]-odd[1][i];
				cost1=cost1+pow(abs(diff),d);
			}
			for(i=0;i<l;i++)
			{
				diff=even[0][i]-even[1][i];
			//	diff=even[0][i]-even[1][i];
				cost2=cost2+pow(abs(diff),d);
			}
			if(cost1<=cost2)
			printf("%lld\n",cost1);
			else
			printf("%lld\n",cost2);
			
		}
		
		b=0;g=0;cost1=0;cost2=0;j=0;k=0;l=0;m=0;
	}
	return 0;
}
