#include<stdio.h>
#include<stdlib.h>
int push(int a[],int *t);
int print(int a[],int*t);
int pop(int a[],int *t);
int main()
{
	int n,*tp;
	char c;
	int a[10],top=-1;
	//a[0]=2;
	//a[1]=5;
		tp=&top;
	printf("%d",*tp);
	
	printf("------press n to discontinue------ ");
	while((c=getchar())!='n')
	{
		printf("\npress to select::\n");
	printf("1-PUSH\t2-POP\t3-ISEMPTY\t4-IS FULL\t5-DISPLAY\t6-EXIT\n");
	scanf("%d",&n);
	//top=1;

	switch(n)
	{
		case 1:
			{
				push(a,tp);
				print(a,tp);
				break;
		    }
	   case 2:
	   	{
	   		pop(a,tp);
	   		print(a,tp);
	   			break;
	   	}
	   	case 3:
	   		{
	   			if(*tp==-1)
	   			printf("\nthe stack is empty");
	   			else
	   			printf("\nthe stack is not empty");
	   				break;
	   		}
	   		case 4:
	   			{
	   				if(*tp==9)
	   				printf("\nthe stack is full");
	   				else
	   				printf("\nthe stack is not full");
	   					break;
	   			}
	   			case 5:
	   				{
	   					print(a,tp);
	   						break;
	   				}
	   				case 6:
	   					{
	   						exit(1);
	   					}
	
	}
    }
	return 0;
}
int push(int a[],int *t)
{ 
     int g;
     *t=(*t)+1;
     //t=t+1;
	printf("enter the digit\n");
	scanf("%d",&a[(*t)]);
	
}
int print(int a[],int *t)
{
	int i;
	printf("\nthe stack is");
	for(i=0;i<=*t;i++)
	{
		printf("%d\t",a[i]);
	}
}
int pop(int a[],int *t)
{
	
	printf("the popped element is %d",a[*t]);
	*t=(*t)-1;
	//t=t-1;
}
