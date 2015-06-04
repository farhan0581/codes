#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
void display(char a[][3]);
void swap(char a[][3],int i,int j,int k,int l);
int main()
{
	static int i,j,arr[10],c;
	int rad,bi,bj;
	char a[3][3],ch;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		a[i][j]=' ';
	}
	srand((unsigned)time(NULL));
	i=0,j=0;
	arr[0]=0;
	for(;;)//start of random generatition
	{
		rad=rand()%10;
		if(arr[rad]!=rad)
		{
			arr[rad]=rad;
		    if(i<=2&&j<=2)
		    {
		    	if(rad==9)
		    	{
		    	a[i][j]=32;
		    	bi=i;bj=j;
		        }
		    	else
		    	a[i][j]=rad+48;
		    	j++;
		    	if(j==3)
		    	{
		    		j=0;
		    		i++;
		    		if(i==3)
		    		break;
		    	}
		    }
	  }
	}//end of random generatition
	printf("\t   Randomly generated square\n\n");
	printf("INSTRUCTION::\n\n\t1.control keys are\n\n\t    (i) p/P--> move right \n\n\t    (ii) i/I-->left move \n\n\t    (iii) o/O--> up move\n\n\t    (iv) l/L-->down move\n");
	display(a);
	//printf("enter your move key :: ");
	for(;;)
	{
		fflush(stdout);
		printf("enter your move key :: ");
		fflush(stdin);
		scanf("%c",&ch);
		if(tolower(ch)=='p')//right move
		{
			if(bj==2)
				printf("Can't move\n");
			else
			{
				swap(a,bi,bj,bi,bj+1);
				bj++;
				display(a);
			}
		}
		else if(tolower(ch)=='i')//left move
		{
			if(bj==0)
			  printf("Can't move\n");
			else
			{
				swap(a,bi,bj,bi,bj-1);
				bj--;
				display(a);
			}
		}
		else if(tolower(ch)=='l')//down move
		{
			if(bi==2)
				printf("Can't move\n");
			else
			{
				swap(a,bi,bj,bi+1,bj);
				bi++;
				display(a);
			}
		}
		else if(tolower(ch)=='o')//up move
		{
			if(bi==0)
				printf("Can't move\n");
			else
			{
				swap(a,bi,bj,bi-1,bj);
				bi--;
				display(a);
			}
		}
	}
	return 0;
}
void display(char a[3][3])// display
{
	int i,j;
	printf("\t\t");
    printf(" -------------\n");
	for(i=0;i<3;i++)
	{
	    printf(" \t\t");
		for(j=0;j<3;j++)
			printf(" | %c",a[i][j]);
		printf(" |\n\t\t");
		printf(" -------------\n");
	}
}
void swap(char a[3][3],int i,int j,int I,int J)
{
	char temp=a[i][j];
	a[i][j]=a[I][J];
	a[I][J]=temp;
}
