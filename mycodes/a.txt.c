//taking input 1

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/shm.h>
#include<stdlib.h>
#include"common.h"


int main()
{
	void *shared_memory=(void *)0;
	struct com *shared;
	int shmid;
	int i,j;
	shmid=shmget((key_t)1234,sizeof(struct com),0666 | IPC_CREAT);
	
	if(shmid==-1)
	{
		printf("Shared memory not created\n");
		exit(0);
	}
	
	shared_memory=shmat(shmid,(void *)0,0);
	if(shared_memory==(void *)-1)
	{
		printf("Not connected to shared memory\n");
		exit(0);
	}
	
	shared=(struct com *)shared_memory;

	shared->flag=1;
        while(1)
	{
	        if(shared->flag==1)
		{

			printf("Enter Number of rows and columns\n");
			scanf("%d %d",&(shared->row),&(shared->col));
			printf("Enter Matrix 1 elements\n");
			for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("Enter element array1[%d][%d]::",i,j);
					scanf("%d",&(shared->array1[i][j]));
				}
			}
			printf("Matrix 1 is \n\n");
			for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("%d ",(shared->array1[i][j]));
				}
				printf("\n");
			}
			
			shared->flag=2;
			break;

		}

	}
       while(1)
	{
		if(shared->flag==1)
		{
		printf("\n\tResult of addition of two matrix is\n\n\t");
		for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("%d ",(shared->add[i][j]));
				}
				printf("\n\t");
			}
		printf("\n\tResult of Multiplication of two matrix is\n\n\t");
		for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("%d ",(shared->multi[i][j]));
				}
				printf("\n\t");
			}
		
		break;
		}
	}
return 0;
}
