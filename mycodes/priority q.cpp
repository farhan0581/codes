#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node
{
	char nm[10];
	int pr;
	struct node *link;
};
struct node *start,*ptr,*temp;
int main()
{
	struct node *start=NULL;
	char c;
	int n;
	while((c=getchar())!='n')
	{
		printf("the menu is as follows,press n to exit\n");
		printf("1.insert\n2.delete\n3.display");
		printf("enter your choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
				{
					del();
					break;
				}
			case 3:
				{
					display();
					break;
				}
		}
	}
	return 0;
}
void insert()
{
	int d,c=0;
	char s[10];
	temp=start;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("enter the values\n");
	scanf("%d",&d);
	fflush(stdin);
	printf("\nenter info");
	gets(ptr->nm);
	
	ptr->pr=d;
	if(start==NULL)
	{
			start=ptr;
		ptr->link=NULL;printf("far1");
	
	}
     else if((ptr->pr)<=(start->pr))
	{
		ptr->link=start;
		start=ptr;printf("far2");
	}
	else
	{
		while((ptr->pr)>=(temp->pr)&&(temp->link)!=NULL)
		{
			temp=temp->link;
			c++;
		}
		if(c==1)
		{	ptr->link=temp->link;
	     	temp->link=ptr;printf("far4");
		}
		else if(c>1)
		{
			temp--;
				ptr->link=temp->link;
		        temp->link=ptr;printf("far4");
		}
	
	}
}
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("|%s|%d|->",temp->nm,temp->pr);
		temp=temp->link;
	}
}
void del()
{
	printf("the deleted element is %s%d",start->nm,start->pr);
	start=start->link;
}
