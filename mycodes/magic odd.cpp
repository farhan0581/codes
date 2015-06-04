#include<stdio.h>
int main()
{
	int i,j,a[50][50],c=1,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	i=0;j=n/2;
	a[i][j]=c;
	
	while(c<=n*n)
	{
		if(i==0)
		{
			if(a[n-1][j+1]==0&&j!=n-1)
			{
				i=n-1;j=j+1;
				a[i][j]=++c;
			}
			else
			{
				if(a[i+1][j]==0)
				i++;
				a[i][j]=++c;
			}
		
		}
		else if((i!=0)&&(j!=n-1))
		{
			if(a[i-1][j+1]==0)
			{
			  i--;
			  j++;
			  a[i][j]=++c;
		    }
		    	else
			{
				if(a[i+1][j]==0)
				i++;
				a[i][j]=++c;
			}
		}
		else if(j==n-1)
		{
			if(a[i-1][0]==0)
			{
					j=0;i--;
		        	a[i][j]=++c;
			}
				else
			{
				if(a[i+1][j]==0)
				i++;
				a[i][j]=++c;
			}
			
		
		}
			
		
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	
	return 0;
}
