    #include<stdio.h>
    #include<math.h>
    int main()
    {
    long long int sine=0,cosine=0,s,c,k,d,result,t,j,level,clevel,i;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld %lld %lld",&s,&c,&k);
    //sine
    if(s-k>=0&&s!=0)
    {
    level=s-k+1;
    sine=pow(2,level)+1;
    }
    else if(s-k<0||s==0)
    {
    sine=0;
    }
    //cosine
    if((s-k+1)>0&&k!=1)
    {
    clevel=s-k+1;
    if(c>=clevel)
    {
    cosine=pow(2,clevel);
    }
    }
    if(k==1)
    {
    if(c>=s)
    {
    if(s==0)
    j=1;
    else
    j=s;
    for(i=j;i<=c;i++)
    {
    cosine=cosine+pow(2,i);
    //printf("%lld ",cosine);
    }
    }
    }
    result=sine+cosine;
    printf("%lld\n",result);
    cosine=0;sine=0;
    }
    return 0;
    } 
