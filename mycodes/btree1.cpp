#include<stdio.h>
#include<stdlib.h>
int insert(struct node* p,struct node* q);
//void del();
void display(struct node* temp);
struct node
{
	int val ;
	struct node *right;
	struct node *left;
};
struct node *root,*ptr,*temp;
int main()
{
	struct node *root=NULL;
	char c;
	int n,d;
	do
	{
		printf("the menu is as follows,press n to exit\n");
		printf("1.insert\n2.delete\n3.display");
		printf("enter your choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					ptr=(struct node *)malloc(sizeof(struct node));
					printf("enter the value\n");
					scanf("%d",&d);
					ptr->val=d;
					ptr->left=NULL;
					ptr->right=NULL;
					temp=root;
					insert(ptr,temp);
					break;
				}
			case 2:
				{
				//	del();
					break;
				}
			case 3:
				{
					display(root);
					break;
					
				}
		}
	}while((c=getchar())!='n');
	return 0;
}
int insert(struct node* p,struct node* q)
{
	if(q==NULL)
	{
			q=p;
			printf("far1");
			//return;
	}
	
	else
	{
				printf("l1");
	
			      if((p->val)<(q->val))
		
				{
				
					printf("l2");
					if(q->left==NULL)
					{
						q->left=p;
						//return;
					}
					else
					insert(p,q->left);
				}
					
						
		
				else if((p->val)>(q->val))
				
					{printf("l3");
						if(q->right==NULL)
						{
							q->right=p;
							//return;
						}
						else
						insert(p,q->right);
					}
				

	}
}


void display(struct node* temp)
{
	
   if (temp != NULL)
    {
    	 printf("%d", temp->val);
      display(temp->left);
      
      //display(temp->right);
   }
}

