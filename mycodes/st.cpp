#include<stdio.h>
#include<stdlib.h>
void insbeg(struct node *start);
void display(struct node *start);
	struct node
	{
		int a;
		float b;
		struct node *link;
		
	};struct node *ptr,*start;
int main()
{  struct node *start;
 	start=NULL;
 	//printf("\n1%u",start);
 	insbeg(start);
 	display(start);
	return 0;
}
void insbeg(struct node *start)
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
		ptr->link=NULL;//printf("\2n%u",start);
	}
	else
	{
		ptr->link=start;
        start=ptr;
		//ptr->link=temp;//printf("\n3%u",start);
		
	}
}
void display(struct node *start)
{   
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d%f",ptr->a,ptr->b);
		ptr=ptr->link;
	}//printf("\n4%u",start);
}

