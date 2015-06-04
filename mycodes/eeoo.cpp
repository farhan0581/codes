#include<stdio.h>
int main()
{
	long int z,t=0,x,y;
	scanf("%d",&z);
	while(t<z)
	{
		scanf("%ld%ld",&x,&y);
		if(x>=0&&y>=0)
		{
			if(y>=0&&y<=(x+1)&&x%2==1)
			printf("YES");
			else if(y>(x+1)&&y%2==0)
			printf("YES");
			else
			printf("NO");
		}
		else if(x<=0&&y>=0)
		{
			if(y>=0&&y<=(-x)&&x%2==0)
			printf("YES");
			else if(y>(-x)&&y%2==0)
			printf("YES");
			else
				printf("NO");
		}
		else if(x<=0&&y<=0)
		{
			if(y<=0&&y>=x&&x%2==0)
			printf("YES");
			else if(y<x&&y%2==0)
			printf("YES");
			else
				printf("NO");
		}
		else if(x>=0&&y<=0)
		{
			if(y<=0&&y>=(-x+1)&&x%2==1)
			printf("YES");
			else if(y<(-x+1)&&y%2==0)
			printf("YES");
			else
				printf("NO");
		}
		else 
		printf("NO");
		t++;
	}
	return 0;
}
