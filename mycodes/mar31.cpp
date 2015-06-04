#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	static long long int i,t,b,g,d,c,odd[2][100005],even[2][100005],k,j,l,m,diff1,diff2,cost1,cost2,f1,f2,min;
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
		if(j<=l)
		{
			min=j;
			f2=1;
		}
		
		else
		{
			min=l;
			//max=j;
			f1=1;
		}
		
		if(b-g==1)
		{
			if(t==0)
			printf("%lld\n",min-1);
			else
			{
				for(i=0;i<j;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+pow(abs(diff1),d);
				}
				
				printf("%lld\n",cost1);
			}
			
			
		}
		else if(b-g==-1)
		{
			if(t==0)
			printf("%lld\n",min-1);
			else
			{
				for(i=0;i<l;i++)
				{
					diff2=even[0][i]-even[1][i];
					cost2=cost2+pow(abs(diff2),d);
				}
				
				printf("%lld\n",cost2);
				}
			
		}
		
		
		else if(b==g)
		{
			if(t==0)
			{
				printf("%lld\n",min-1);
			}
			else
			{
				for(i=0;i<min;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+pow(abs(diff1),d);
					diff2=even[0][i]-even[1][i];
					cost2=cost2+pow(abs(diff2),d);
				}
			if(f2==1)
			{
				for(i=j;i<l;i++)
				{
					diff2=even[0][i]-even[1][i];
					cost2=cost2+pow(abs(diff2),d);
				}
			}
			if(f1==1)
			{
				for(i=l;i<j;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+pow(abs(diff1),d);
				}
			}
		
			if(cost1<=cost2)
			printf("%lld\n",cost1);
			else
			printf("%lld\n",cost2);
			
			}
		
		}
		else
		printf("-1\n");
		
		
		
		b=0;g=0;cost1=0;cost2=0;j=0;k=0;l=0;m=0,f1=0,f2=0;
	}
	return 0;
}
