#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,c,d;
	a=10;
	b=5;
	
	c=b-a;
//	if(c<0)
//	c=c*-1;
//	printf("%lld\n",c);
	d=pow(2,abs(a-b));
	printf("%lld",d);
	return 0;
}
