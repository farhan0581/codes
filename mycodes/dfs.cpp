#include<stdio.h>			
int main()
{
	static int v[7];
	int i,j,stack[10],k=0,s,c=0;
	int a[7][7]={{0,1,1,1,0,0,0},{0,0,0,0,1,1,0},{0,0,0,0,0,0,1},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
	printf("enter the start node");
	scanf("%d",&s);
	printf("%d",s);
	i=s-1;
	while(v[0]!=1||v[1]!=1||v[2]!=1||v[3]!=1||v[4]!=1||v[5]!=1||v[6]!=1)
	{
	for(j=0;j<7;j++)
	{
		if(a[i][j]==1&&v[j]!=1)
		{
			stack[k]=j;
			k++;//printf("aa");
			//c++;
		}
		v[s-1]=1;
		
	}
	if(k>0)
	k--;
	else
	break;
	i=stack[k];
	printf("->%d",i+1);
	v[i]=1;
	//if(k>0)
	//k--;
	
	    //if(c==7)
	    //return 0;
	}
	
    	return 0;
}
