#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	static long long int i,t,b,g,d,c,odd[2][100005],even[2][100005],k,j,l,m,diff1,diff2,cost1,cost2,f1,f2,min,sum1,sum2,sum3,sum4;
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

				odd[0][j]=i;
				sum1=sum1+i;
				j++;
			}
			if(i%2!=0&&a[i]!='G')
			{
				odd[1][k]=i;
				sum2=sum2+i;
				k++;
			}
			if(i%2==0&&a[i]!='G')
			{
				even[0][l]=i;
				sum3=sum3+i;
				l++;
			}
			if(i%2!=0&&a[i]!='B')
			{
				even[1][m]=i;
				sum4=sum4+i;
				m++;
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
			if(d==0)
			printf("%lld\n",min-1);
			else if(d==1)
			{
				cost1=abs(sum1-sum2);
				cost2=abs(sum3-sum4);
				if(cost1<=cost2)
				printf("%lld\n",cost1);
				else
				printf("%lld\n",cost2);
			}
			else
			{
				for(i=0;i<j;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+abs(diff1)*abs(diff1);        
				}
				
				printf("%lld\n",cost1);
			}
			
			
		}
		else if(b-g==-1)
		{
			if(d==0)
			printf("%lld\n",min-1);
			else if(d==1)
			{
					cost1=abs(sum1-sum2);
					cost2=abs(sum3-sum4);
					if(cost1<=cost2)
					printf("%lld\n",cost1);
					else
					printf("%lld\n",cost2);
			}
			else
			{
				for(i=0;i<l;i++)
				{
					diff2=even[0][i]-even[1][i];
					cost2=cost2+abs(diff2)*abs(diff2);
				}
				
				printf("%lld\n",cost2);
			}
			
		}
		
		
		else if(b==g)
		{
			if(d==0)
			{
				printf("%lld\n",min-1);
			}
			else if(d==1)
			{
				cost1=abs(sum1-sum2);
				cost2=abs(sum3-sum4);
				if(cost1<=cost2)
				printf("%lld\n",cost1);
				else
				printf("%lld\n",cost2);
			}
			else
			{
				for(i=0;i<min;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+abs(diff1)*abs(diff1);
					
					diff2=even[0][i]-even[1][i];
					cost2=cost2+abs(diff2)*abs(diff2);
				}
			if(f2==1)
			{
				for(i=j;i<l;i++)
				{
					diff2=even[0][i]-even[1][i];
					cost2=cost2+abs(diff2)*abs(diff2);
				}
			}
			if(f1==1)
			{
				for(i=l;i<j;i++)
				{
					diff1=odd[0][i]-odd[1][i];
					cost1=cost1+abs(diff1)*abs(diff1);
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
		
		
		
		b=0;g=0;cost1=0;cost2=0;j=0;k=0;l=0;m=0,f1=0,f2=0,sum2=0,sum1=0,sum4=0,sum3=0;
	}
	return 0;
}
