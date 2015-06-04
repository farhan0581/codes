#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,k,f;
	double f1,e,N,D,k1,n1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		f=(long long int)log2(k);
		f1=(double)f;
		k1=(double)k;
		n1=(double)n;
		e=pow(2,f1+1);
		N=(1+2*k1-e)*n1;
		D=e;
		printf("%lf\n",N/D);
	}
}
