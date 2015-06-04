#include<stdio.h>
int main()
{
	int t,n,i,big,k=0,j=0,b[10];
	scanf("%d",&t);
	
	while(k<t)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		big=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]+i>=big)
			big=a[i]+i;		
		}
		b[k]=big;
		k++;
	    
	}
	while(j<t)
	{
		printf("%d\n",b[j]);
		j++;
	}
	
     	return 0;
	
}
