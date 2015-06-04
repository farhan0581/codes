//djkastra to find shortest path
#include<stdio.h>
int main()
{
   static int pathl[8],status[8],pred[8],temp[8],perm[8],i,j,k,c,start,current,ncurrent,min,a[8][8],t,flag=0;
   FILE *fp;
	fp=fopen("dj.txt","r");


		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				fscanf(fp,"%d",&t);
				a[i][j]=t;
			}
		}
	
	for(i=0;i<8;i++)
	pathl[i]=1000;
	printf("enter the source\n");
	scanf("%d",&start);
	pathl[start]=0;
	temp[start]=1;
	perm[start]=1;
	current=start;c=7;
	while(c>0)
	{
		min=50;
		
		//finding neighbour vertices
		for(i=current,j=0;j<8;j++)
		{
			if(a[i][j]>0&&perm[j]!=1)
			{
				temp[j]=1;
				flag=1;
			}
		}
		//if there are no temp vertices...
		if(flag==0)
		{
			for(i=0;i<8;i++)
			{
				if(temp[i]==1&&perm[i]!=1)
				current=i;
			}
		}
		flag=0;

		//finding smallest neighbour
		for(i=current,j=0;j<8;j++)
		{
			if(a[i][j]>0&&temp[j]==1&&perm[j]!=1)
			{
				if(pathl[current]+a[i][j]<pathl[j])
					{
						pathl[j]=pathl[current]+a[i][j];
						pred[j]=current;
						
					}
					if(pathl[j]<min)
						{
							min=pathl[j];
							ncurrent=j;c--;
						}
			}
			
		}
		//assigning the new current vetex and making permanent;
		perm[ncurrent]=1;
		current=ncurrent;
	
		
	}
	printf("the pathlength matrix is \n");
	for(i=0;i<8;i++)
	printf("%d ",pathl[i]);
	printf("\nthe predecessor matrix is\n");
	for(i=0;i<8;i++)
	printf("%d ",pred[i]);
	return 0;
}
