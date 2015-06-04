#include<stdio.h>
#include<math.h>
int main()
{
long int t,i,j,k,l,m,n,min,max;
scanf("%ld",&t);
while(t--)
{scanf("%ld%ld",&n,&m);
min=1000000;max=-1;
for(i=0;i<m;i++)
{scanf("%ld",&j);
if(min>j)
min=j;
if(max<j)
max=j;
}
for(i=0;i<n;i++)
{j=abs(max-i);k=abs(min-i);
if(j>k)
printf("%ld ",j);
else
printf("%ld ",k);
}
printf("\n");
}
return 0;
} 
