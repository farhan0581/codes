#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(struct node *start);
void sum();
void display();
struct  node
{
 int pow;
 int coff;
 struct node *link;
};
struct node *ptr1,*ptr2,*start1,*start2,*start3,*temp,*temp1,*temp2,*ptr;

int main()
{
   start1=NULL;
   start2=NULL;
   start3=NULL;
   printf("user enter the polynomial 1\n");
   create(start1);
   printf("user enter the polynomial 2\n");
   create(start2);
   sum();
   display();
   getch();
   return 0;

}
void create(struct node *start)
{
	char z;
	int c,p;
	while((z=getchar())!='n')
	{
		printf("enter the coefficient and power\npress n to exit\n");
		scanf("%d%d",&c,&p);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->coff=c;
		temp->pow=p;
		if(start==NULL)
		{
			start=temp;
			temp->link=NULL;
		}
		else
		{
			ptr=start;
			while(ptr!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=temp;
			temp->link=NULL;
		}
	}
}

void sum()
{
 int c,c1,c2,p,p1,p2;
 ptr1=start1;
 ptr2=start2;
 while(ptr1!=NULL)
 {
	if(ptr1->pow==ptr2->pow)
	{
		c=((ptr1->coff)+(ptr2->coff));
		p=ptr1->pow;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->coff=c;
		temp->pow=p;
		if(start3==NULL)
		{
			start3=temp;
			temp->link=NULL;
		}
		else
		{
			ptr=start3;
			while(ptr!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=temp;
			temp->link=NULL;
		}
	}
	else
	{
		p1=ptr1->pow;
		p2=ptr2->pow;
		c1=ptr1->coff;
		c2=ptr2->coff;
		temp1=(struct node *)malloc(sizeof(struct node));
		temp2=(struct node *)malloc(sizeof(struct node));
		temp1->pow=p1;temp2->pow=p2;
		temp1->coff=c1;temp2->coff=c2;
		if(start3==NULL)
		{
			start3=temp1;
			temp1->link=temp2;
			temp2->link=NULL;
		}
		else
		{
			ptr=start3;
			while(ptr!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=temp1;
			temp1->link=temp2;
			temp2->link=NULL;
		}
	}
	ptr1=ptr1->link;
	ptr2=ptr2->link;
 }
}
void display()
{
	ptr=start3;
	while(ptr!=NULL)
	{
		printf("%d %d\n",ptr->coff,ptr->pow);
		ptr=ptr->link;
	}
}


