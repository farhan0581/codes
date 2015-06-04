#include<stdio.h>			
int main()
{
	static int v[7];
	int i,j,stack[10],k=0,s,c=0;
	int a[7][7]={{0,1,1,1,0,0,0},{0,0,0,0,1,1,0},{0,0,0,0,0,0,1},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
	printf("enter the start node");
	scanf("%d",&s);
	printf("%d",s);v[s-1]=1;
	i=s-1;
	while(v[0]!=1||v[1]!=1||v[2]!=1||v[3]!=1||v[4]!=1||v[5]!=1||v[6]!=1)
	{
	for(j=0;j<7;j++)
	{
		if(a[i][j]==1&&v[j]!=1)
		{
			stack[k]=j;
			k++;
		}
		
		
	}
	if(k>0)
	{
		k--;
		i=stack[k];
	    printf("->%d",i+1);
	    v[i]=1;
	}
	else
	{
		if(i>=0&&i<=5)
		{
			i++;
			printf("->%d",i+1);
			v[i]=1;
		}
		else
		{
			i=0;
		    k=0;
		    printf("->%d",1);
		    v[i]=1;
		}
	}
	}
	
    	return 0;
}
