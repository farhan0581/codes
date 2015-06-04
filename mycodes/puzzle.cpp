/*  fascinating PUZZLE GAME*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>	
int main()
{
	int i,j,a[9],n,t;
	srand(time(NULL));
	for(i=0;i<9;i++)
	{
		a[i]=rand()%9;
		j=i-1;
		while(j>=0)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[i]==a[j])
				{
				a[i]=rand()%9;
				break;}
			}
		}
		if(i==6||i==3)
		printf("\n\n");
		printf("%d  ",a[i]);
	}
	printf("the controls are as follows\n");
	while(1)
	{
			printf("\npress 8 for moving upward direction\n");
	printf("press 4 for moving left direction\n");
	printf("press 6 for moving right direction\n");
	printf("press 2 for moving downward direction\n");
	printf("press 5 for exit\n");
	scanf("%d",&n);
		switch(n)
		{
			case 2: for(i=0;i<9;i++)
						{
							if(a[i]==0)
							break;
						}
						if(i!=7&&i!=8&&i!=6)
					    {			 
							t=a[i];
							a[i]=a[i+3];
							a[i+3]=t;
						}
						for(i=0;i<9;i++)
						{
							if(i==3||i==6)
							printf("\n\n");
							printf("%d  ",a[i]);
						}
						break;	
			case 4: for(i=0;i<9;i++)
						{
							if(a[i]==0)
							break;
						}
						if(i!=0&&i!=3&&i!=6)
					    {			 
							t=a[i];
							a[i]=a[i-1];
							a[i-1]=t;
						}
						for(i=0;i<9;i++)
						{
							if(i==3||i==6)
							printf("\n\n");
							printf("%d  ",a[i]);
						}
						break;
			case 6: for(i=0;i<9;i++)
						{
							if(a[i]==0)
							break;
						}
						if(i!=2&&i!=5&&i!=8)
					    {			 
							t=a[i];
							a[i]=a[i+1];
							a[i+1]=t;
						}
						for(i=0;i<9;i++)
						{
							if(i==3||i==6)
							printf("\n\n");
							printf("%d  ",a[i]);
						}
						break;	
			case 8: for(i=0;i<9;i++)
						{
							if(a[i]==0)
							break;
						}
						if(i!=0&&i!=1&&i!=2)
					    {			 
							t=a[i];
							a[i]=a[i-3];
							a[i-3]=t;
						}
						for(i=0;i<9;i++)
						{
							if(i==3||i==6)
							printf("\n\n");
							printf("%d  ",a[i]);
						}
						break;		
			case 5: exit(0);
		}
	}
	return 0;
}
 

