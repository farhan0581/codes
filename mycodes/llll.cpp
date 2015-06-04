#include<stdio.h>
int w[9]={1,2,3,4,5,6,7,8,9};
int c=1;
char v[12]={'a','b','c','d','e','f','g','h','i'},m,l;
int check(char a,char b);
void update(char x,char y);
int main()
{
	int n,i=0,sum=0;
	char e[14][3];
	
	printf("how many edges??\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c %c %d",&e[i][0],&e[i][1],&e[i][2]);
	}
	for(i=0;i<14;i++)
	{
		m=e[i][0];
		l=e[i][1];
		
		if(check(m,l)==1)
		{
			sum=sum+e[i][2];
			update(m,l);
		}
		
	}
	printf("%d",sum);
/*	for(i=0;i<9;i++)
	{
		printf("%c %d\n",v[i],w[i]);
	}*/
	return 0;
}
int check(char a,char b)
{
	int i,p,q;
	for(i=0;i<9;i++)
	{
		if(v[i]==a)
		p=w[i];
		if(v[i]==b)
		q=w[i];
	}
	if(p!=q)
	return 1;
	else
	return 0;
}
void update(char x,char y)
{
	int i,p,q,g,h,k;
	
	for(i=0;i<9;i++)
	{
		if(v[i]==x)
		{
			p=w[i];
			g=i;
		}
		if(v[i]==y)
		{
			q=w[i];
			h=i;
		}
	}
	if(p>q)
	{
		w[h]=p;
	}
	else if(p<q)
	{
		w[g]=q;
	}
	printf(" %c %c %d %d \n",x,y,w[g],w[h]);
}
