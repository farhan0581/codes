#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,a[10],l,m,t;
	srand(time(NULL));
	for(i=0;i<9;i++)
	{
			again:
			t=1+rand()%9;
			a[i]=t;
			for(j=0;j<i;j++)
			{
				if(a[j]==a[i])
				goto again;
			}
			printf("%d\t",a[i]);
		
	}
	return 0;
}
