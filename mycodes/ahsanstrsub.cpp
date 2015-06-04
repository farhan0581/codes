#include<stdio.h>
#include<string.h>
#include<stdlib.h>
long long int input()
{char c;
long long int t=0;
c=getchar_unlocked();
while(c<'0'||c>'9')
c=getchar_unlocked();
while(c>='0'&&c<='9')
{
t=t*10+c-48;
c=getchar_unlocked();
}
return t;
}
int main()
{
long long flag=0,ans,q,arr[100005],i,j,k,l,r,m,n,t,x,y,zero,one,fw[100005],bw[100005],cf[100005];
char str[100005];
scanf("%lld",&t);
while(t--)
{
n=input();k=input();q=input();
//scanf("%lld%lld%lld",&n,&k,&q);
k++;
for(i=0;i<=n;i++)
{
fw[i]=n;bw[i]=-1;
arr[i]=0;cf[i]=0;
}
gets(str);
//scanf("%s",str);
x=0;//bwd ptr
y=0;//fwd ptr
m=0;//no of incorrect substr
zero=0;one=0;
while(y!=n)
{
while(1)//moving frwd ptr
{
if(y!=0)
{
fw[y]=fw[y-1];
bw[y]=bw[y-1];
}
if(str[y]=='1')
one++;
else
zero++;
//if(y!=0)
if(zero==k||one==k)
break;
//arr[y]=((y+1)*(y+2))/2 - m;
y++;
if(y>=n)
break;
//fw[y]=fw[y-1];
//bw[y]=bw[y-1];
arr[y]+=arr[y-1];
}
while(one==k||zero==k)// moving bwd ptr forward
{
fw[x]=y;
bw[y]=x;
if(str[x]=='1')
one--;
else
zero--;
x++;
//m=m+n-y;
arr[y]++;
}

if(y==n)
break;
y++;
arr[y]+=arr[y-1];
}
cf[0]=fw[0];
for(i=1;i<=n;++i)
{
arr[i]=arr[i]+arr[i-1];
arr[i-1]=(i*(i+1)/2)-arr[i-1];
cf[i]=cf[i-1]+fw[i];
//printf("%lld ",arr[i-1]);
}

flag=0;
ans=0;
while(q--)
{flag=0;
l=input();r=input();
//scanf("%lld%lld",&l,&r);
l--;r--;
one=r-l+1;
if(k>one)
{
printf("%lld\n",(one*(one+1))/2);
continue;
}
if(l==0)
{
printf("%lld\n",arr[r]);
continue;
}
//x=l-1;
ans = arr[r]-arr[l-1];//((x+1)*(x+2))/2;

x=bw[l];

x++;

for(i=l-1;i>=x;i--)
{
if(fw[i]>r)
{
ans=ans-one;
//printf("%lld %lld %lld\n",ans,fw[i],x);
}
else
{flag++;
if(flag==2)
break;
else
{ans=ans-fw[i]+l;
//printf("h %lld %lld %lld\n",ans,fw[i],x);
}
}
}
if(flag==2)
{if(x!=0)
ans=ans-((cf[i]-cf[x-1])-((i-x+1)*l));
else
ans=ans-((cf[i])-((i-x+1)*l));
//printf("hhh %lld %lld %lld\n",ans,fw[i],x);
}
printf("%lld\n",ans);
}
}
return 0;
} 
