//FOR TYPE 2
//         \      \
// EG 	  BGBGBGBGB
//	  BBBGBGBGG
//	  012345678
//	   1      8   //(8-1)*(8-1)=49
//BUT	   B G        // TO SWAP THIS (3-1)*(3-1)=4// we can swap consecutive terms in less cost to reach from 3 to 1 
						   // swap index 3 to 2 then 2 to 1 with cost=2;
// ans =7;		conclusion: swap only consecutive terms bcoz it takes only cost=1 |j-i|*|j-i|=|1|^2 	  
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
static long long l1,b,g,i,j,k,l,m,n,t,type,x,y,x1,y1,boy[100005],girl[100005],boy1[100005],girl1[100005];
char str[100005];
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&type);
scanf("%s",str);
n=strlen(str);
b=0;g=0;
for(i=0;i<n;i++)
{
//tmpb[i]=str[i];tmpg[i]=str[i];
if(str[i]=='B')
{b++;}
else
{g++;}
}
if(abs(b-g)>1)
{
printf("-1\n");
continue;
}
x=0;y=0;
if(b>g)
{
x=0;y=0;
for(i=0;i<n;i=i+2)
{
if(str[i]!='B')
{
boy[x]=i;
x++;
}
}
	for(i=1;i<n;i=i+2)
	{
		if(str[i]!='G')
		{
			girl[y]=i;
		y++;
		}
	}


if(type==0)
{printf("%lld\n",y);continue;
}
else //if(type==1)
{l=0;
for(i=0;i<y;i++)
{
l=l+abs(boy[i]-girl[i]);
}
printf("%lld\n",l);continue;
}
/*else
{l=0;
for(i=0;i<y;i++)
{
l=l+abs(boy[i]-girl[i])*abs(boy[i]-girl[i]);
}
l1=0;

for(i=0;i<n;i++)
{

if((i%2==0&&tmpb[i]=='B')||(i%2==1&&tmpb[i]=='G'))
continue;
else if(tmpb[i]=='B')
{
j=i+1;
while(tmpb[j]!='G')
j++;
tmpb[j]='B';tmpb[i]='G';
l1=l1+(j-i);
}
else if(tmpb[i]=='G')
{
j=i+1;
while(tmpb[j]!='B')
j++;
tmpb[j]='G';tmpb[i]='B';
l1=l1+(j-i);
}
}
if(l1>l)
{printf("%lld\n",l);continue;}
else
{printf("%lld\n",l1);continue;}
}*/
}
else if(b<g)
{
x=0;y=0;
for(i=0;i<n;i=i+2)
{
if(str[i]!='G')
{
girl[y]=i;
y++;
}
}
	for(i=1;i<n;i=i+2)
	{
		if(str[i]!='B')
		{
			boy[x]=i;
		x++;
		}
	}

if(type==0)
{printf("%lld\n",x);continue;
}
else //if(type==1)
{
l=0;
for(i=0;i<x;i++)
{
l=l+abs(boy[i]-girl[i]);
}
printf("%lld\n",l);continue;
}/*
else
{l=0;
for(i=0;i<x;i++)
{
l=l+abs(boy[i]-girl[i])*abs(boy[i]-girl[i]);
}
//printf("%lld\n",l);continue;

l1=0;
for(i=0;i<n;i++)
{
if((i%2==0&&tmpg[i]=='G')||(i%2==1&&tmpg[i]=='B'))
continue;
else if(tmpg[i]=='G')
{
j=i+1;
while(tmpg[j]!='B')
j++;
tmpg[j]='G';tmpg[i]='B';
l1=l1+(j-i);
}
else if(tmpg[i]=='B')
{
j=i+1;
while(tmpg[j]!='G')
j++;
tmpg[j]='B';tmpg[i]='G';
l1=l1+(j-i);

}


}
if(l1>l)
{printf("%lld\n",l);continue;}
else
{printf("%lld\n",l1);continue;}
}*/
}
else
{
x=0;y=0;
for(i=0;i<n;i=i+2)
{
if(str[i]!='B')
{
boy[x]=i;
x++;
}
}
	for(i=1;i<n;i=i+2)
	{
		if(str[i]!='G')
		{
			girl[y]=i;
		y++;
		}
	}
x1=0;y1=0;
for(i=0;i<n;i=i+2)
{
if(str[i]!='G')
{
girl1[y1]=i;
y1++;
}
}
	for(i=1;i<n;i=i+2)
	{
		if(str[i]!='B')
		{
			boy1[x1]=i;
		x1++;
		}
	}
if(type==0)
{
if(x1>=x)
printf("%lld\n",x);
else
printf("%lld\n",x1);
continue;

}
else //if(type==1)
{

l=0;
for(i=0;i<x;i++)
{
l=l+abs(boy[i]-girl[i]);
}
l1=0;
for(i=0;i<x1;i++)
{
l1=l1+abs(boy1[i]-girl1[i]);
}
if(l1>l)
printf("%lld\n",l);
else
printf("%lld\n",l1);
continue;


}/*
else
{
l=0;
for(i=0;i<x;i++)
{
l=l+abs(boy[i]-girl[i])*abs(boy[i]-girl[i]);
}
l1=0;
for(i=0;i<x1;i++)
{
l1=l1+abs(boy1[i]-girl1[i])*abs(boy1[i]-girl1[i]);
}
if(l1<l)
l=l1;
l1=0;

for(i=0;i<n;i++)
{

if((i%2==0&&tmpb[i]=='B')||(i%2==1&&tmpb[i]=='G'))
continue;
else if(tmpb[i]=='B')
{
j=i+1;
while(tmpb[j]!='G')
j++;
tmpb[j]='B';tmpb[i]='G';
l1=l1+(j-i)*(j-i);
}
else if(tmpb[i]=='G')
{
j=i+1;
while(tmpb[j]!='B')
j++;
tmpb[j]='G';tmpb[i]='B';
l1=l1+(j-i)*(j-i);

}

}
if(l1<l)
l=l1;

//printf("%lld %s %s",l,tmpb,tmpg);
l1=0;
for(i=0;i<n;i++)
{
if((i%2==0&&tmpg[i]=='G')||(i%2==1&&tmpg[i]=='B'))
continue;
else if(tmpg[i]=='G')
{
j=i+1;
while(tmpg[j]!='B')
j++;
tmpg[j]='G';tmpg[i]='B';
l1=l1+(j-i)*(j-i);
}
else if(tmpg[i]=='B')
{
j=i+1;
while(tmpg[j]!='G')
j++;
tmpg[j]='B';tmpg[i]='G';
l1=l1+(j-i)*(j-i);

}


}
if(l1>l)
printf("%lld\n",l);
else
printf("%lld\n",l1);
}
*/
}

}
return 0;
}
