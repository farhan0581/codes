#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=1,k=1,p=0,v=0,m,n,s,x,y;
	scanf("%d%d",&n,&m);
	char a[n];
	int b[m];
	for(i=1;i<=n;i++)
	{
		a[i]=getchar();
		
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	while(k<=m)
	{
		for(i=1;i<b[j];i++)
		{
			x=a[b[j]]-48;printf("a%d",x);
			y=a[i]-48;printf("b%d",y);
			s=x-y;printf("c%d",s);
			if(s>0)
			p=p+s;
			else
			v=v+s;
		}
		j++;
		k++;
	//	printf("%d\n",p-v);
		p=0;v=0;
	}
	return 0;
	
}
