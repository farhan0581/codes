#include<stdio.h>
void print(struct farhan far);
int main()
{
	struct farhan
	{
		char name[10];
		int marks;
	};
    struct farhan far1,far2;
	printf("enter the name and marks of 1");
	scanf("%s%d",far1.name,&far1.marks);
	print(far1);
	//printf("\nthe material is %s and %d",far1.name,far1.marks);
	return 0;
}
void print(struct farhan far)
{
	printf("%s%d",far.name,far.marks);
}
