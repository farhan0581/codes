#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *link_next;
	int node_distance;
	int name;
};
struct list{

	struct list *next;
	int list_name;
	struct node *start_node;
};

// global 

int status[100];
int pathlength[100];
int predecessor[100];
int source;
struct list *list_start_addr=NULL;
struct node *node_start_addr;
// end global
void addinlist(int from)
{
	struct list *temp_list,*dul_list_addr,*temp;
	if(list_start_addr==NULL)
	{
		temp_list=(struct list *)malloc(sizeof(struct list));
		temp_list->list_name=from;
		temp_list->next=NULL;
		temp_list->start_node=NULL;
		list_start_addr=temp_list;
		return ;
	}
	else
	{
		dul_list_addr=list_start_addr;
		while(dul_list_addr->next!=NULL)
		{
			if(dul_list_addr->list_name==from)
				return;
			else
				dul_list_addr=dul_list_addr->next;
		}
		if(dul_list_addr->list_name==from)
				return;
		temp_list=(struct list *)malloc(sizeof(struct list));
		temp_list->list_name=from;
		temp_list->next=NULL;
		temp_list->start_node=NULL;
		dul_list_addr->next=temp_list;
		temp=list_start_addr;
	//	while(temp!=NULL)
	//	{
	//		printf("%d-->",temp->list_name);
	//		temp=temp->next;
	//	}
	//	printf("\n");
		return;
	}
}
void addedge(int from1,int from2,int val)
{
	struct node *temp_node,*temp_node_1;
	struct list *temp_list;
	int count=0;
	temp_list=list_start_addr;
	while(count!=2)
	{
	//	printf("here\n");
		if(temp_list->list_name==from1)
		{
			temp_node=(struct node *)malloc(sizeof(struct node));
			temp_node->node_distance=val;
			temp_node->name=from2;
			if(temp_list->start_node==NULL)
			{
				temp_node->link_next=NULL;
				temp_list->start_node=temp_node;
			}
			else
			{
				temp_node->link_next=temp_list->start_node;
				temp_list->start_node=temp_node;
			}
			++count;
		}
		else if(temp_list->list_name==from2)
		{
			temp_node=(struct node *)malloc(sizeof(struct node));
			temp_node->node_distance=val;
			temp_node->name=from1;
			if(temp_list->start_node==NULL)
			{
				temp_node->link_next=NULL;
				temp_list->start_node=temp_node;
			}
			else
			{
				temp_node->link_next=temp_list->start_node;
				temp_list->start_node=temp_node;
			}
			++count;	
		}
		temp_list=temp_list->next;
	}
}

int min_pathlength()
{
	int i,m,k=-1;
	m=9999999;
	for(i=1;i<=100;i++)
	{
		if(status[i]==0&&pathlength[i]<m)
			{
				m=pathlength[i];
				k=i;
			}
	}
//	printf("%d\n",k);
	return k;
}
void dijkstra()
{
	int min,t;
	struct node *temp_node=NULL;
	struct list *temp_list=NULL;
	printf("Enter source node:: ");
	scanf("%d",&source);
	pathlength[source]=0;
	predecessor[source]=-1;
	while(1)
	{
		min=min_pathlength();
		//printf("here\n");
		if(min==-1)
			break;
		status[min]=1;
		temp_list=list_start_addr;
		temp_node=NULL;
		while(temp_list!=NULL)
		{
		//	printf("here1\n");
			if(temp_list->list_name==min)
			{
				temp_node=temp_list->start_node;
				break;
			}
			temp_list=temp_list->next;
		}
		while(temp_node!=NULL)
		{
		//	printf("here2\n");
			t=temp_node->node_distance;
			if(pathlength[min]+t<pathlength[temp_node->name]&&status[temp_node->name]==0)
			{
				predecessor[temp_node->name]=min;
				pathlength[temp_node->name]=pathlength[min]+t;
			}
			temp_node=temp_node->link_next;
		}
	}
}
int main()
{
	int n,i,val,from1,from2;
	struct list *temp;
	printf("Enter number of edge in graph:: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter two node name space seprated::");
		scanf("%d%d",&from1,&from2);
		printf("Enter distance between two node::");
		scanf("%d",&val);
		addinlist(from1);
		addinlist(from2);
		addedge(from1,from2,val);
	}
	for(i=1;i<=100;i++)
	{
		status[i]=0;
		pathlength[i]=9999999;
	}
	dijkstra();
	while(1)
	{
		printf("Enter distination vertex for shortest path or -1 to exit:: ");
		scanf("%d",&i);
		if(i==-1)
			break;
		else
		{
			while(1)
			{
				printf("%d",i);
				i=predecessor[i];
				if(i==-1)
					break;
				printf("<--");
			}
		}
		printf("\n");
	}
	return 0;
}
