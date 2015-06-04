#include<stdio.h>
#include<stdlib.h>
void ins();
void dis();
struct node 
{
	char name[10];
	int marks;
	struct node *link;
};
struct node *temp,*start,*ptr,*ds;
int main()
{
	int n;
	start=NULL;
	//ptr=start;
	while(1)
	{
		printf("enter the choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					ins();//printf("g");
					break;
				}
			case 2:
				{
					dis();
					break;
				}
				case 3:
					exit(0);
		}
	}
	return 0;
}
void ins()
{
	

	printf("enter the name and no");
	temp=(struct node *)malloc(sizeof(struct node));
	scanf("%s%d",&temp->name,&temp->marks);
	if(start==NULL)
	{//printf("fg");
		start=temp;
		temp->link=NULL;
		ptr=temp;
		
	}
	else
	{
		ptr->link=temp;
		ptr=ptr->link;
		temp->link=NULL;
		
	}
	
}
void dis()
{
	ds=start;
	while(ds!=NULL)
	{
		printf("\t%s%d",ds->name,ds->marks);
		ds=ds->link;
	}
}
