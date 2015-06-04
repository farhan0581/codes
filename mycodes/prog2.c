//taking input 2

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
	shmid=shmget((key_t)1234,sizeof(struct com),066 | IPC_CREAT);
	
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
	
	while(1)
	{
		if(shared->flag==2)
		{

			printf("Enter Number of rows and columns\n");
			scanf("%d %d",&(shared->row),&(shared->col));
			printf("Enter Matrix 2 elements\n");
			for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("Enter element array1[%d][%d]::",i,j);
					scanf("%d",&(shared->array2[i][j]));
				}
			}
			printf("Matrix 2 is \n");
			for(i=0;i<shared->row;i++)
			{
				for(j=0;j<shared->col;j++)
				{
					printf("%d ",(shared->array2[i][j]));
				}
				printf("\n");
			}

			shared->flag=3;
			break;
		}
	}

	while(1)
	{
		if(shared->flag==2)
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
		
		shared->flag=1;
		break;
		}
	}
return 0;
}
