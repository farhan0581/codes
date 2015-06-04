#include<stdio.h>
int main()
{
	hbxv
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&i,&j);
			a[i-1][j-1]=1;
		}i=0;
		v[0]=1;
		while(1)
		{
			for(j=0;j<n;j++)
	       {
		      if(a[i][j]==1&&v[j]!=1)
		      {
		     	stack[k]=j;
		     	if(g[j]==0&&flag==0)
		     	{
		     		g[j]=1;
		     		flag=1;
		     	}
		     	if(g[j]==0&&flag==1)
		     	{
		     		g[j]=2;flag=0;
		     	}
		     	if(g[j]==1&&flag==1)
		     	{
		     		printf("Suspicious bugs found!");
		     		exit();
		     	}
		     	if(g[j]==2&&flag==0)
		     	{
		     		printf("Suspicious bugs found!");
		     		exit();
		     	}
		    	k++;
		      }
		
   	       }
   	       if(k>0)
     	{
		k--;
		i=stack[k];
	    v[i]=1;
    	}
     	else
    	{
		   if(i>=0&&i<=n-2)
		   {
			i++;
			v[i]=1;
		   } 

		}
	}
	printf("No suspicious bugs found!\n");
}
return 0;
