#include<stdio.h>
#include<stdlib.h>
struct vertex
{
	int info;
	struct vertex *next;
	struct vertex *nextedge;
};
struct edge
{
	int infoed;
	struct edge *next;
};
struct vertex *start;
void insertv(int x);
void insertedge(int p,int q);
void out(struct vertex *k);
int main()
{
	int v,s;
	char c;
	start=NULL;
	printf("how many vertex?\n");
	scanf("%d",&v);
	while(v--)
	{
		printf("enter the vertex\n");
		scanf("%d",&s);
		insertv(s);
	}
	
	printf("now we enter the edges--press n to stop\n");
	while(1)
	{
		fflush(stdin);
		if(c=='n')
		break;
		printf("what is vertex?\n");
		scanf("%d",&v);
		printf("how many edges?\n");
		scanf("%d",&s);
		insertedge(v,s);
		
		printf("more??\n");
		scanf("%c\n",&c);
		
		
	}
	out(start);

	
	return 0;
}
void insertv(int x)
{
	struct vertex *tmp,*ptr;
	tmp=(struct vertex *)malloc(sizeof(struct vertex));
	tmp->info=x;
	tmp->next=NULL;
	tmp->nextedge=NULL;
	if(start==NULL)
	{
		
		start=tmp;
		
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		//ptr=ptr->next;
		ptr->next=tmp;
		
	}
}
void out(struct vertex *k)
{
	struct vertex *ptr;
	struct edge *tmp;
	ptr=k;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		tmp=(struct edge *)ptr->nextedge;
		while(tmp!=NULL)
		{
			printf("%d ",tmp->infoed);
			tmp=tmp->next;
		}
		ptr=ptr->next;
		printf("\n");
	}
}
void insertedge(int p,int q)
{
	struct vertex *ptr;
	struct edge *tmp,*tp;
	ptr=start;
	int i;
	
	while(ptr!=NULL)
	{
		if(ptr->info==p)
		break;
		else
		ptr=ptr->next;
	}
	tp=(struct edge *)ptr->nextedge;
	while(q--)
	{
		printf("what is the adjacet edge?\n");
		scanf("%d",&i);
		tmp=(struct edge *)malloc(sizeof(struct edge));
		tmp->infoed=i;
		if(tp==NULL)
		{
			ptr->nextedge=(struct vertex *)tmp;
			tmp->next=NULL;
		}
		else
		{
			while(tp!=NULL)
			{
				tp=tp->next;
			}
			tp=tmp;
			tmp->next=NULL;
		}
		
	}
}
