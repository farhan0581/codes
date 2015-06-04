#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int t,i;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		t=rand()%7;
		printf("%d",t);
	}
	return 0;
	
}
