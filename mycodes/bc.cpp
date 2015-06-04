#include<stdio.h>
#include<stdlib.h>
void ins();
//void del();
void dis();
struct node
{
	int rn;
	char nm[10];
	char sm[10];
	struct node *link;
};
struct node *start,*temp,*front,*rear,*ptr;
int main()
{
	int n;
	start=NULL;
	while(1)
	{
		printf("\nthe menu is as\n");
		printf("1.insert\n2.del\n3.display\n4.exit");
		printf("your choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					ins();
					break;
				}
			case 2:
				{
					//del();
					break;
				}
			case 3:
			{
				dis();
				break;
			}
			case 4:
			{
				exit(0);
			}	
		}
	}
	return 0;
}

void ins()
{

	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the roll no\n");
	scanf("%d",&temp->rn);
	printf("enter the name\n");
	scanf("%s",temp->nm);
	printf("enter the sem\n");
	scanf("%s",temp->sm);
	if(start==NULL)
	{
		start=temp;
		temp->link=NULL;
		
	}
	else if(temp->rn<=start->rn)
	{
	
	    temp->link=start->link;
	    	start=temp;
	}
	else
	{
		rear=start;
		front=start;
		while(temp->rn>=rear->rn&&rear->link!=NULL)
		{
			front=rear;
			rear=rear->link;
		}
	
		temp->link=rear;
	    front->link=temp;
		
	}
}
void dis()
{
	int i=1;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t%d\t%s\t%s\n",i,ptr->rn,ptr->nm,ptr->sm);
		i++;
		ptr=ptr->link;
	}
	
}
