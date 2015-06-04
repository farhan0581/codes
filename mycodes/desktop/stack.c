#include<stdio.h>
void push(int stk[],int *t,int item);
void pop(int stk[],int *t);
void isempty(int *t);
void isfull(int *t);
int main()
{
	int i,n,item,top=-1;
	int *t=&top;
	int stk[9];
	while(1)
	{
	printf("enter your choice\n");
	printf("press 1 for push\n");
	printf("press 2 for pop\n");
	printf("press 3 for isempty\n");
	printf("press 4 for isfull\n");
	printf("press 5 for display\n");
	printf("press 6 for exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("enter the item\n");
			   scanf("%d",&item);
			   push(stk,t,item);
			   break;
		case 2:pop(stk,t);
			   break;
		case 3:isempty(t);
			   break;
		case 4:isfull(t);
			   break;
		case 5:for(i=0;i<=*t;i++)
		       printf("%d\n",stk[i]);
			   break;
		case 6:exit(0);	   
	}
}
	return 0;
}
void push(int stk[],int *t,int item)
{
	int i;
	*t=*t+1;
	stk[*t]=item;
	for(i=0;i<=*t;i++)
	printf("%d\n",stk[i]);
	return;
}
void pop(int stk[],int *t)
{
	int i;
	printf("%d\n",stk[*t]);
	*t=*t-1;
	for(i=0;i<=*t;i++)
	printf("%d\n",stk[i]);
	return;
}
void isempty(int *t)
{
	if(*t==-1)
	printf("stack is empty\n");
	else
	printf("stack is not empty\n");
return;	
}
void isfull(int *t)
{
	if(*t==8)
	printf("stack is full\n");
	else
	printf("stack is not full\n");
return;	
}
