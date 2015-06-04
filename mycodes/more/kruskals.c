//using adj list
#include<stdio.h>
#include<stdlib.h>
struct node {
int wt,sr,ds;
};

int main()
{int minspan,s,d,n,i ,j,k,l,kruskal[100];
struct node *arr[100],*tmp;
for(i=0;i<100;i++)
{arr[i]=NULL;kruskal[i]=i;}

printf("enter the no of edges in a graph\n");
scanf("%d",&n);

printf("enter\n|weight|  |source|   |destination| \n");
for(i=0;i<n;i++)
{  arr[i]=(struct node *)malloc(sizeof(struct node));
	if(arr[i]==NULL)
	{return 0;}
scanf("%d%d%d",&(arr[i]->wt),&(arr[i]->sr),&(arr[i]->ds));

//arr[i]=tmp;
}

for(i=0;i<n;i++)
{k=arr[i]->wt;l=i;
	for(j=i+1;j<n;j++)
	{if((arr[j]->wt) < k)
		{k=arr[j]->wt;l=j;}
	}
tmp=arr[i];
arr[i]=arr[l];
arr[l]=tmp;
}

printf("sorted edges \n");
for(i=0;i<n;i++)
printf("%d %d %d\n",arr[i]->wt,arr[i]->sr,arr[i]->ds);

minspan=0;
printf("Edges\n");
//disjoint set ...
//initially in kruskal[] all nodes are representative of themselves
//initially n sets present
for(i=0;i<n;i++)
{ 
s=arr[i]->sr;d=arr[i]->ds;
//k=kruskal[s];
while(kruskal[s]!=s)
s=kruskal[s];
k=s;
// k is representative of set containing s
while(kruskal[d]!=d)
{ if(d==k)
break;	
	d=kruskal[d];
}
j=d;
//j is representative of set containing d
// if both representatives are diff then its a disjoint set 
//,no cycle,add the edge
if(k!=j)
{	
minspan=minspan+arr[i]->wt;
kruskal[k]=arr[i]->ds;
printf("[%d  ,  %d]\n",arr[i]->sr,arr[i]->ds);
}

}

printf("\n\n weight of Min spanning tree is %d\n",minspan);
return 0;
}




/* testcase
14
enter
|weight|  |source|   |destination| 
2 8 2
1 7 6
4 2 5
6 8 6
14 3 5
11 1 7
10 5 4
7 2 3
7 7 8
9 3 4
8 1 2
8 0 7
2 6 5
4 0 1


*/
