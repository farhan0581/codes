#include<stdio.h>
//#include<conio.h>
void sort(int indexlist[20][20],int psize,int size)
{
	int i,j,k,temp;
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=psize;j++)
		{
			for(k=j+1;k<=psize;k++)
			{
				if(indexlist[j][i]>indexlist[k][i])
				{
					temp=indexlist[j][i];
					indexlist[j][i]=indexlist[k][i];
					indexlist[k][i]=temp;
				}
			}
		}
	}
}
void mean(int indexlist[20][20],int psize,int size,float *meanavg)
{
	int j,k;
    float avg;
	for(j=1;j<=size;j++)
		{
			avg=0.0;
			for(k=1;k<=psize;k++)
			{
			   	avg+=indexlist[k][j];
			}
			meanavg[j]=avg/(float)psize;
		}
}
void median(int indexlist[20][20],int psize,int size,float *medianavg)
	{
	   int j,k;
       if(psize%2==0)
       {
       	 k=psize/2;
       	 for(j=1;j<=size;j++)
			   	medianavg[j]=(indexlist[k][j]+indexlist[k+1][j])/2.0;
       }
       else
       {
       	   k=psize/2+1;
       	   for(j=1;j<=size;j++)
		  {
			   	medianavg[j]=indexlist[k][j];
		  } 
       }
	}
int main()
{
	int i,j,size,psize,count=0,lists[20][20], mainlist[20],indexlist[20][20],temp,k,temppos;
	float meanavg[20],medianavg[20],finalavg[20][2],t;
	printf("Enter the mainlist the size of mainlist:: ");
	scanf("%d",&size);
	printf("Enter the mainlist elements\n");
	for(i=0;i<size;i++)
	scanf("%d",&mainlist[i]);
	printf("Enter number of permutaion \n");
	scanf("%d",&psize);
	//permute(mainlist,0,size-1,psize,lists,count);
	for(i=1;i<=psize;i++)
	{  
	    printf("Enter list %d:: ",i);
		for(j=1;j<=size;j++)
		scanf("%d",&lists[i][j]);
		printf("\n");
	}
	for(i=1;i<=psize;i++)
	{  
		for(j=1;j<=size;j++)
		{
			temp=lists[i][j];
			indexlist[i][temp]=j;
		}
	}
	for(i=1;i<=psize;i++)
	{  
		for(j=1;j<=size;j++)
		printf("%d ",indexlist[i][j]);
		printf("\n");
	}
	sort(indexlist,psize,size);
	mean(indexlist,psize,size,meanavg);
	median(indexlist,psize,size,medianavg);
	printf("After sorted\n");
for(i=1;i<=psize;i++)//sorted indexlist
	{  
		for(j=1;j<=size;j++)
		printf("%d ",indexlist[i][j]);
		printf("\n");
	}
	printf("mean\n"); 
		for(j=1;j<=size;j++)
		printf("%f ",meanavg[j]);
		printf("\n");
	printf("median\n"); 
		for(j=1;j<=size;j++)
		printf("%f ",medianavg[j]);
		printf("\n");
		printf("\nmean final\n");
	for(j=1;j<=size;j++)
	  {
		finalavg[1][j]=(meanavg[j]+medianavg[j])/2.0;
		printf("%f ",finalavg[1][j]);
		finalavg[0][j]=j;
	  }
	 /* printf("\nmean final\n");
	  for(j=1;j<=size;j++)
	  {
		printf("%f ",finalavg[1][j]);
	  }
	  printf("\n");
	for(j=1;j<=size;j++)
	  {
		for(k=j+1;k<=size;k++)
		{
			if(finalavg[1][j]>finalavg[1][k])
			{
				t=finalavg[1][j];
				finalavg[1][j]=finalavg[1][k];
				finalavg[1][k]=t;
				temppos=finalavg[0][j];
				finalavg[0][j]=finalavg[0][k];
				finalavg[0][k]=temppos;
			}
		}
	  printf("final\n");
	  for(j=1;j<=size;j++)
	  {
		printf("%f %.0f \n",finalavg[1][j],finalavg[0][j]);
	  }
	  //getch();*/
	  }
	  

/*printf("After sorted\n");
for(i=1;i<=psize;i++)//sorted indexlist
	{  
		for(j=1;j<=size;j++)
		printf("%d ",indexlist[i][j]);
		printf("\n");
	}


void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(int mainlist[20], int i, int n,int psize,int lists[20][20],int count) 
{
   int j; 
   if (i == n)
     {
     	if(count<=psize)
     	{
	     	for(j=0;j<=n;j++)
	     	{ mainlist[j]=lists[count][j];
	     	   printf("%d ",mainlist[j]);
	        }
	        printf("\n");
	     	count++;
	    }
	    else
	    return ;
     }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((mainlist+i), (mainlist+j));
          permute(mainlist, i+1, n,psize,lists,count);
          swap((mainlist+i), (mainlist+j));
       }
   }*/

