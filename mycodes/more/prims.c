//using adjacency matrix
#include<stdio.h>
int length[100],pre[100],status[100],weight[100][100],n;
void minspan(int k);
int main()
{int i,j,k;
printf(" Enter total no of nodes\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
	scanf("%d",&weight[i][j]);
}
printf("Enter the starting node\n");
scanf("%d",&k);
k--;// 0 based indexing
//status=0 means temp otherwise perm
//pre stands for predecessor
//initially length infinity
for(i=0;i<n;i++)
{status[i]=0;pre[i]=-1;length[i]=1000;}

length[k]=0;
status[k]=1;
minspan(k);

printf("\n(predecessor,vertex)\n");
for(i=0;i<n;i++)
{if(i==k)
printf("(--,V%d) ",i+1);
else
printf("(V%d,V%d) ",pre[i]+1,i+1);
}
printf("\n\n");

j=0;
for(i=0;i<n;i++)
j=j+length[i];
printf("min spanning length is -> %d\n",j);
return 0;
}
void minspan(int k)
{int i,j=0,l,min=1000;
//printf("k is %d\n",k);
for(i=0;i<n;i++)
{ if(status[i]==0&&weight[k][i]!=0)
	{	if(weight[k][i]<length[i])
		{	length[i]=weight[k][i];
			pre[i]=k;
		//printf("-> %d ",i);
		//if(min>length[i])
		//	
		}
	}
}j=0;
for(i=0;i<n;i++)
{if(status[i]==0)
	{	if(min>length[i])
		 {min=length[i];l=i;j=1;}
	}
}
if(j==1)
{status[l]=1;minspan(l);}
else
return;
}


/*
test case
6
0 5 14 9 7 0
5 0 0 11 0 3
14 0 0 2 8 0
9 11 2 0 4 6
7 0 8 4 0 19
0 3 0 6 19 0

*/


