#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void check(char a[]);
void print(char a[]);
int main()
{
	int i,c=0,n,m,t=0;
	char a[25];
	printf("user 1 will take X and user 2 will take O ");
	printf("the position are as follows:\n");
	for(i=1;i<10;)
	{
		if(c<3)
		{
			printf("%d\t",i);
			a[i]='_';
			c++;
			i++;
		}
		else
		{
			printf("\n");
			c=0;
		}
	}
	for(i=0;i<9;)
	{
		printf("user 1 turn\n");
		scanf("%d",&n);
		a[n-1]='X';
			print(a);
		i++;
	
		switch (n)
		{
			case 1:
				{
					if((a[0]=a[1]=a[2]=='X')||(a[0]=a[3]=a[6]=='X')||(a[0]=a[4]=a[8]=='X'))
					{
		              printf("\nuser 1 wins!!");
		              exit(0);
				    }
		        }
		     case 2:
			 {
			 	if((a[0]=a[1]=a[2]=='X')||(a[1]=a[4]=a[7]=='X'))
			 	{
			 		 printf("\nuser 1 wins!!");
		              exit(0);
			 	}
			 }
			 case 3:
			 {
			 	if((a[0]=a[1]=a[2]=='X')||(a[2]=a[5]=a[8]=='X')||(a[2]=a[4]=a[6]=='X'))
			 	{
			 		 printf("\nuser 1 wins!!");
		              exit(0);
			 	}
			 }
			 case 4:
			 {
			 	if((a[0]=a[3]=a[6]=='X')||(a[3]=a[4]=a[5]=='X'))
			 	{
			 		 printf("\nuser 1 wins!!");
		              exit(0);
			 	}
			 }
			 case 5:
			 {
			 	if((a[1]=a[4]=a[7]=='X')||(a[3]=a[4]=a[5]=='X'))
			 	{
			 		 printf("\nuser 1 wins!!");
		              exit(0);
			 	}
			 }   
			 case 6:
			 	{
			 		if((a[2]=a[5]=a[8]=='X')||(a[3]=a[4]=a[5]=='X'))
			 		{
			 			 printf("\nuser 1 wins!!");
		              exit(0);
			 		}
			 	}
			 	case 7:
			 		{
			 			if((a[0]=a[3]=a[6]=='X')||(a[6]=a[7]=a[8]=='X')||(a[2]=a[4]=a[6]=='X'))
			 			{
			 				 printf("\nuser 1 wins!!");
		              exit(0);
			 			}
			 		}
			 	case 8:
				 {
				 	if((a[1]=a[4]=a[7]=='X')||(a[6]=a[7]=a[8]=='X'))
				 	{
				 		 printf("\nuser 1 wins!!");
		              exit(0);
				 	}
				 }   
				 case 9:
				 	{
				 		if((a[6]=a[7]=a[8]=='X')||(a[2]=a[5]=a[8]=='X')||(a[0]=a[4]=a[8]=='X'))
				 		{
				 			 printf("\nuser 1 wins!!");
		              exit(0);
				 		}
				 	}}
		printf("user 2 turn\n");
		scanf("%d",&m);
		a[m]='O';
		i++;
		print(a);
	}
	
	return 0;
}
void print(char a[])
{  
        int j,c=0;  
		for(j=0;j<9;)
	{
		if(c<3)
		{
			printf("%c\t",a[j]);
			c++;
			j++;
		}
		else
		{
			printf("\n");
			c=0;
		}
	}
	
}
