#include<stdio.h>
#include<stdio.h>

main()
{
	float x1,x2,x3,x4;
	int i;
	x1=0.0,x2=0.0,x3=0.0,x4=0.0;
	printf("Enter number of iteration\n");
	scanf("%d",&i);
	while(i>=0)
	{
		x1=(3+2*x2+x3+x4)/10;// equ
		x2=(15+2*x1+x3+x4)/10;// equ
		x3=(27+x1+x2+2*x4)/10;// equ
		x4=(-9+x1+x2+2*x3)/10;// equ
		i--;
	}
	printf("x1=%f\nx2=%f\nx3=%f\nx4=%f",x1,x2,x3,x4);
}
