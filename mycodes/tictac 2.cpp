#include<stdio.h>
#include<stdlib.h>
void print(char a[3][3]);
int main()
{
	int i,j,k;
	char m,n;
	printf("user 1 takes X and user2 takes O\n");
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c\t",a[i][j])  ;
		}
		printf("\n");
	
    }
    
	for(i=0;i<9;)
	{
		printf("\nuser 1 turn");
		scanf("%c",&n);
		i++;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[j][k]==n)
				{
				a[j][k]='X';}
			}
		}
		fflush(stdin);
		print(a);
		printf("\nuser 2 turn ");
		scanf("%c",&m);
		i++;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[j][k]==m)
				{
				a[j][k]='O';}
			}
		
	    }
	    print(a);
	    fflush(stdin);
	    
	}
}	
void print(char a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{  
            if((a[i][j]=='X')||(a[i][j]=='O'))
			{
			printf("\t%c",a[i][j]);
		    }
			else
			printf("\t_"); 
			
		}
		printf("\n");
	}
}
