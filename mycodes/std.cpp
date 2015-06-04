#include<stdio.h>
#include<stdlib.h>
void insbeg();
void insend();
void display();
	struct node
	{
		int a;
		float b;
		struct node *link;
		
	};struct node *ptr,*start,*link,*temp;
int main()
{   
    char c; int n;
 	start=NULL;
 	while((c=getchar())!='n')
 	{
 	printf("enter your choice\n");
 	scanf("%d",&n);
 	switch(n)
 	{
 		case 1:
 			{
 					insbeg();
 	                display();
 	                break;
 			}
 			case 2:
 				{
 					insend();
 					display();
 					break;
 				}
 	}
 }
 
	return 0;
}
void insbeg()
{   
	int d;
	float f;
	struct node *temp;
	printf("enter the element");
	scanf("%d%f",&d,&f);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->a=d;
	ptr->b=f;
	if(start==NULL)
	{
		start=ptr;
		ptr->link=NULL;
	}
	else
	{
		ptr->link=start;
        start=ptr;
		
	}
}
void display()
{   
	ptr=start;
	while(ptr!=NULL)
	{
		printf("|%d|%f|->",ptr->a,ptr->b);
		ptr=ptr->link;
	}
}
void insend()
{   
    int d;
    float f;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter values\n");
	scanf("%d%f",&d,&f);
	ptr->a=d;
	ptr->b=f;
	temp->link=ptr;
	ptr->link=NULL;
	temp=start;
}
