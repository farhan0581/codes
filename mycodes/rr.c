#include<stdio.h>
int main()
{
	FILE *fp;
	int ch,bt[4]={30,6,8,10},gt[10],i=0,sum=0,gc[20],m=0,tat=0,wt=0,j,t=6;
	fp=fopen("rr.txt","r");
//	while(fscanf(fp,"%d",&ch)!=EOF)
//	{
//		bt[i++]=ch;//printf("%d\n",bt[i]);
//	}
	for(i=0;i<4;i++)
		printf("%d\n",bt[i]);
	gt[0]=0;//printf("%d",bt[3]);
	j=1;
	//gc[0]=1
	while(bt[0]!=0||bt[1]!=0||bt[2]!=0||bt[3]!=0)
	{//printf("\ng\n");

			for(i=0;i<4;i++)
			{
				if(bt[i]>=5)
				{
					gc[m]=i+1;m++;
					bt[i]=bt[i]-5;
					sum=sum+5;
					gt[j++]=sum;//j++;//printf("%d\t",bt[i]);
				}
				
				 else if(bt[i]>0&&bt[i]<5)
					{
					gc[m]=i+1;m++;
					sum=sum+bt[i];
					bt[i]=0;
					gt[j++]=sum;//j++;//printf("%d\t",bt[i]);
					}
				
		}
	}
	for(i=0;i<m;i++)
	printf("  p%d  ",gc[i]);
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%d   ",gt[i]);
	}
	printf("\n");
	sum=0;
//	for(i=0;i<m-2;i++)
//	{
//		sum=sum+gt
//	}
return 0;
}
