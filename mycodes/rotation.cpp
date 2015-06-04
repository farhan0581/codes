#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,m,a[10000],b[10000],c;
	char m1[1000],m2[10000][10000];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}fflush(stdin);
	for(i=0;i<m;i++)
	{
		scanf("%c%c%s",&m1[i],&b,m2[i]);
	
	}fflush(stdin);
	for(i=0;i<m;i++)
	{
		if(m1[i]=='C')
		{
			c=m2[i];
			for(j=0,k=c;k<n;k++)
			{
				b[j]=a[k];
				j++;
			}
			for(k=0;k<c;k++)
			{
				b[j]=a[k];
				j++;
			}
		}
	}
	for(i=0;i<m;)
	{
		printf("%c %c\n",m1[i],m2[i]);i++;
	}
	return 0;
}
