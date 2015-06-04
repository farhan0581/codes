#include<stdio.h>
#include<stdlib.h>

struct node{
struct node *lchild;//pointer to left child
char data;
struct node *rchild;//may point to right child or successor
int rtag;//to differentiate btwn link and rthread
int ltag;
};
struct node *head,*tmp;//point to header


struct node*inorder_successor(struct node *ptr);
struct node*inorder_predecessor(struct node *ptr);
void insert(char x,char m,char lr);
void traversal();

int main()
{
struct node header;//header's lchild point to root node of threaded tree
int i,j,k,n,t;
char x,m,lr;

//initialize header
head=&header;
head->lchild=head;//initially no node is present in Th_tree
head->ltag=1;
head->rchild=head;//point to itself
head->rtag=0;//its a link not thread


printf("choice \n");
printf("   1	->	insertion\n");
printf("   2	->	inorder_traversal\n");
printf("   3	->	exit\n");
printf("For insertion specify 3 parameters : x y z\n");
printf("x : data of node after which insertion has to be done\n");
printf("y : enter l or r for inserting as a left or right child\n");
printf("z : data of new node to be inserted\n");

printf("enter the root node ( only data of root ) \n");
scanf(" %c",&x);

tmp=(struct node *)malloc(sizeof(struct node));
tmp->data=x;
tmp->lchild=head;
tmp->ltag=1;
tmp->rchild=head;
tmp->rtag=1;//its a thread
head->lchild=tmp;//point to root node
head->ltag=0;

while(1)
{
	printf("Enter the choice\n");
	scanf("%d",&n);
		switch(n)
		{
		case 1: //printf("enter node after which insertion has to be done\n");
		scanf(" %c",&x);
		//printf("enter l or r for inserting as a left or right child\n");
		scanf(" %c",&lr);	
		//printf("enter the data of new node\n");
		scanf(" %c",&m);
		insert(x,m,lr);
		break;
	case 2:printf("inorder traversal using right thread is :  ");
	traversal();
	printf("\n");
	break;
		case 3: return 0;	
		default : printf("wrong choice\n");
		break;	
		}

}

return 0;
}

void insert(char x,char m,char lr)
{
int i,j,k,flag=0;
	struct node *ptr,*xptr,*lptr;//ptr for pointing to node containing data x
	ptr=head->lchild;//now ptr point to root
	while(ptr->lchild!=head)//moving towards first node in inorder traversal
	ptr=ptr->lchild;

while(ptr!=head&&flag==0)
{//if we reached the head again then it means data x does not exist in Th_tree
	if(ptr->data==x)
	{xptr=ptr;
	flag=1;
	}
	else
	ptr=inorder_successor(ptr);
	
}
if(flag==0)
{printf("Node %c was not found\n",x);
return ;
}
//xptr now points to node having data x

tmp=(struct node *)malloc(sizeof(struct node));
tmp->data=m;

if(lr=='l'||lr=='L')//insert as left child of xptr
{
	if(xptr->ltag==1)//when left sub-tree is empty
	{
	tmp->lchild=xptr->lchild;
	tmp->ltag=1;
	
	xptr->lchild=tmp;
	xptr->ltag=0;
	
	tmp->rchild=xptr;//storing thread not link
	tmp->rtag=1;
	}
	else
	{
	ptr=inorder_predecessor(xptr);
	ptr->rchild=tmp;
	
	lptr=xptr->lchild;
	
	xptr->lchild=tmp;
	xptr->ltag=0;
	
	tmp->rchild=xptr;
	tmp->rtag=1;
	tmp->lchild=lptr;
	tmp->ltag=0;
	
	
	}
}
else//insert as right child
{
	if(xptr->rtag==1)//no sub-tree
	{tmp->rchild=xptr->rchild;
	tmp->rtag=1;
	
	xptr->rchild=tmp;
	xptr->rtag=0;

	tmp->lchild=xptr;
	tmp->ltag=1;
	}
	else
	{
	lptr=xptr->rchild;
	xptr->rchild=tmp;
	xptr->rtag=0;
	tmp->lchild=xptr;
	tmp->ltag=1;
	tmp->rchild=lptr;
	
	tmp->rtag=0;
	ptr=inorder_successor(ptr);
	ptr->lchild=tmp;
	}
}

}

struct node *inorder_successor(struct node *ptr)
{
struct node *temp;
temp=ptr->rchild;
if(ptr->rtag==0)
	{while(temp->ltag==0)
	temp=temp->lchild;
	}
return temp;
}
 

struct node *inorder_predecessor(struct node *ptr)
{
struct node *temp;
temp=ptr->lchild;
if(ptr->ltag==0)
	{while(temp->rtag==0)
	temp=temp->rchild;
	}
return temp;
}
 
void traversal()
{
struct node *pt;
pt=head;
	while(1)
	{	pt=inorder_successor(pt);
	if(pt==head)
	break;
	else
	printf(" %c ",pt->data);
	}
}



/* testcase


enter the root node ( only data of root ) 
A
Enter the choice
1
A l B
Enter the choice
1
A r C
Enter the choice
1
A l Z
Enter the choice
2
inorder traversal using right thread is :   B  Z  A  C 
Enter the choice
1
Z r Y
Enter the choice
2
inorder traversal using right thread is :   B  Z  Y  A  C 
3
*/
