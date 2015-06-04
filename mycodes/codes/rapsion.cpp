#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2;
	int itr;
	printf("No of iteration\n");
	scanf("%d",&itr);
	printf("Initial value x1\n");
	scanf("%f",&x1);
	while(itr>=1)
	{
		x2=x1-(x1*log10(x1)-1.2)/(log10(x1)+0.43429);
		if(x1==x2)
		{
			printf("answer is %f\n",x2);
			break;
		}
		x1=x2;
		printf("%f\n",x2);
		itr--;
	}
	
}
