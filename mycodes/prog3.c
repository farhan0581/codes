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
	int i,j,temp,k;
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
		if(shared->flag==3)
		{
		
				for(i=0;i<shared->row;i++) //Addition of two matrix
				{
					for(j=0;j<shared->col;j++)
					{	
						shared->add[i][j]=shared->array1[i][j]+shared->array2[i][j];
					}
				}

				for(i=0;i<shared->col;i++) //Addition of two matrix
				{
					for(j=0;j<shared->row;j++)
					{	
						temp=0;
						for(k=0;k<shared->row;k++)
							{
							   temp+=shared->array1[k][i]*shared->array2[j][k];	
							}
						shared->multi[i][j]=temp;
			
					}
				}
			shared->flag=2;
			break;

		}
	}
  return 0;
}
