#include<stdio.h>
#include<stdlib.h>
int create(struct node *start);
void sum(struct node *po1,struct node *po2,struct node *po3);
void display(struct node *start);
struct  node
{
 int pow;
 int coff;
 struct node *link;
};
struct node *start1,*start2,*start3,*temp,*ptr;

int main()
{  
   int n;
   start1=NULL;
   start2=NULL;
   start3=NULL;
   while(1)
   {
   printf("1-po1 2-po2  3-display  4-exit");
   printf("\nchoice?");
   scanf("%d",&n);
   switch(n)
   {
   	case 1:
       {
       	     printf("user enter the polynomial 1 and n to exit\n");
              create(start1);break;
       }
    case 2:
    	{
    		 printf("user enter the polynomial 2\n");
             create(start2);break;
    	}
    case 3:
    	{
    		sum(start1,start2,start3);
            display(start3);break;
    	}
   	case 4:
    		{
    			exit(0);
    		}
   }
}
   
   return 0;

}
int create(struct node *start)
{
	int c,p;
	ptr=start;
	
		printf("enter the coefficient and power,choice\n");
		scanf("%d%d%c",&c,&p);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->coff=c;
		temp->pow=p;
		ptr=temp;
		ptr=ptr->link;
	    
    
}

void sum(struct node *po1,struct node *po2,struct node *po3)
{
 int c,p;
 ptr=po3;
 while(po1!=NULL&&po2!=NULL)
 {
	if(po1->pow==po2->pow)
	{
		c=((po1->coff)+(po2->coff));
		p=po1->pow;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->coff=c;
		temp->pow=p;
		ptr=temp;
		ptr=ptr->link;
		po1=po1->link;
		po2=po2->link;
	}
	else if(po1->pow<po2->pow)
		{
			ptr->link=po1;
			po1->link=po2;
			ptr=po2;
		}
		else if(po1->pow>po2->pow)
		{
			ptr->link=po2;
			po2->link=po1;
			ptr=po1;
		}
	
			
	}
		if(po1==NULL&&po2!=NULL)
		{
			while(po2!=NULL)
			{
				ptr->link=po2;
				po2=po2->link;
				ptr=ptr->link;
			}
		}
		else if(po2==NULL&&po1!=NULL)
		{
			while(po1!=NULL)
			{
				ptr->link=po1;
				po1=po1->link;
				ptr=ptr->link;
			}
	}
}

void display(struct node *start)
{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d %d\n",ptr->coff,ptr->pow);
		ptr=ptr->link;
	}
}
