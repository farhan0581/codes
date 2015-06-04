#include<stdio.h>
int main()
{
    int i,j=1,k=1,p=0,v=0,m,n,s;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	while(k<=m)
	{
		for(i=1;i<b[j];i++)
		{
			s=a[b[j]]-a[i];
			if(s>0)
			p=p+s;
			else
			v=v+s;
		}
		j++;
		k++;
		printf("%d\n",p-v);
		p=0;v=0;
	}
	return 0;
	
	
}
