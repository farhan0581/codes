#include<stdio.h>
void display(int a[],int *s,int *e);
int insert(int a[],int *s,int *e);
int del(int a[],int *s,int *e);
int main()
{
	int n,*st=0,*ed=0;
	int a[10];
	printf("the menu is\n1.insertion\n2.deletion\n3.isempty\n4.isfull\n");
	printf("enter your choice\n");
	scanf("%d",&n);
    switch(n)
    {
    	case 1:
    		{
    			 insert(a,st,ed);
    			 display(a,st,ed);
    			 
    		}
    		case 2:
    			{
    				del(a,st,ed);
    				display(a,st,ed);
			    }
			case 3:
				{
					if(*st==0&&*ed==0)
					printf("\n it is empty");
				}
			case 4:
			{
				if(*st!=0&&*ed!=0)
				{
					if(*ed==*st)
					printf("overflow");
				}
			}	
    }
    return 0;
}
int insert(int a[],int *s,int *e)
{
	int  n;
	printf("enter the element\n");
	scanf("%d",&n);
	if(*e==0)
	{
		a[0]=n;printf("gdg");
		*e=1;*s=1;
	}
	else if(*e==10&&*s==1)
	{
		printf("\noverflow");printf("gdg");
	}
	else if(*e==10&&*s!=1)
	{
		*e=0;
		a[*e]=n;printf("gdg");
	}
	else
	{
		a[*e+1]=n;printf("gdg");
		*e=*e+1;
	}
	
}
int del(int a[],int *s,int *e)
{

	if(*s==10)
	{
		printf("\nthe deleted element is %d",a[*s]);
		*s=1;
	}
	if(*s==0)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("\nthe deleted element is %d",a[*s]);
	    *s=*s+1;
	}
}
void display(int a[],int *s,int *e)
{
	int i;
	for(i=*s-1;i<*e;i++)
	{
		printf("\t%d",a[i]);
	}
}
