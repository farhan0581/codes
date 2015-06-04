#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	int marks;
	struct student *link;
};
struct student *beg(struct student *,int ,int);
struct student *end(struct student *,int ,int);
struct student *display(struct student *);
int main()
{
	int i,j,k,n,r,m;
	struct student *start=NULL;
	while(1)
	{
	printf("\npress 1 for inserting at the begining\n");
	printf("press 2 for inserting at the end\n");
	printf("press 3 for for displaying the link list\n" );
	printf("press 4 for exit\n");
	printf("enter your choice\n");
	scanf("%d",&n);
			switch(n)
		{	
	 		case 1: printf("enter the marks and roll no of student\n");
		 			scanf("%d%d",&r,&m);
		 			start=beg(start,r,m);display(start);
		 			break;
			case 2: printf("enter the marks and roll no of the student\n");
					scanf("%d%d",&r,&m);
					start=end(start,r,m);display(start);
					break;
			case 3:	start=display(start);
					break;
			case 4: exit(0);			  		
		}
	}
	return 0;
}
struct student *beg(struct student *start,int r,int m)
{
	struct student *t,*k;
	t=(struct student *)malloc(sizeof(struct student));
	t->roll=r;
	t->marks=m;
	t->link=start;
	start=t;
	/*k=start;
		while(k!=NULL)
	{
		printf("\t%d\t%d\n",k->roll,k->marks);
		k=k->link;
	}
	return start;*/
} 
struct student *end(struct student *start,int r,int m)
{
	struct student *p=start,*t;
	while(p->link!=NULL)
	{
		p=p->link;
	}
	t=(struct student *)malloc(sizeof(struct student));
    t->roll=r;
	t->marks=m;
	t->link=NULL;
	p->link=t;
	return start;
}
struct student *display(struct student *start)
{
	struct student *t=start;
	if(start==NULL)
	{
		printf("\nlist is empty");
		return;
	}
	while(t!=NULL)
	{
		printf("|%d|%d->",t->roll,t->marks);
		t=t->link;
	}
	return start;
}
