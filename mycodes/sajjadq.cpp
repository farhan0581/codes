#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct abc
{
	int a;
	struct abc *link;
}; struct abc *temp,*ptr,*start=NULL,*end=NULL,*link;
int push()
{
	int i;
	printf("Enter the element:\n");
	scanf("%d",&i);
	ptr->a=i;
	if(start==NULL)
	{
		start=ptr;
		end=ptr;
		printf("|%d| ->",ptr->a);
		temp=NULL;
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			temp=temp->link;
		}temp=ptr;
		ptr->link=NULL;
	}
	while(temp!=NULL)
	{
		printf("|%d| ->",temp->a);
		temp=temp->link;
	}
	return 0;
}
int pop()
{
	if(start==NULL)
	printf("UNderflow\n");
	else
	start=start->link;
	return 0;
}
int display()
{
	if(start==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
	 ptr=start;
	 while(ptr!=NULL)
     {
	  printf("|%d| -> ",ptr->a);
	  ptr=ptr->link;
     }
    }
    return 0;
}
int main()
{
	int n;
	ptr=(struct abc*)malloc(sizeof(struct abc));
	do
	{
	 printf("Enter your choice: \n");
	 printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	 scanf("%d",&n);
	 switch(n)
	 {
		case 1: push();
	            break;
	    case 2: pop();
	    		display();
	    		break;
	    case 3: display();
	    		break;
	    case 4: break;
	    default : printf("Wrong choice");
	              break;
	 }
	}while(n!=4);
    return 0; 
}
