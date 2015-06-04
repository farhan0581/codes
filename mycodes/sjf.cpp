#include<stdio.h>
#include<stdlib.h>
struct node
{
	int b;
	struct node *link;
};
struct node *ptr,*temp;
int main()
{
	int i,n;
	
	printf("how many elements");
	scanf("%d",&n);
	printf("enter the burst time\n");
	ptr=(struct node *)malloc(sizeof(struct node));
	temp=ptr;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr->b);//printf("%d",ptr->b);
			ptr=ptr->link;
		ptr=(struct node *)malloc(sizeof(struct node));
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",temp->b);
		temp=temp->link;
	}
	return 0;
}
