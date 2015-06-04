#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int i,no_boy,no_girl,c_even,c_odd,cost,count,n,t,z,m,k,p,q,cost1,cost2;
	int type;
	char str[100005];
	static long long int boy[100005],girl[100005],a[100005];
	//printf("enter t\n");
	scanf("%lld",&t);
	while(t--)
	{ 
	
	   // printf("enter item\n");
	    scanf("%d",&type);
	   // printf("enter string\n");
	    scanf("%s",str);
	    no_boy=0;no_girl=0;
	    c_even=0;c_odd=0;
	    n=strlen(str);
	    for(i=1;i<=n;i++)
	    {
	    	if(str[i-1]=='B')
	    	{    a[i]=1;
	    	}
	    	else
	    	{   a[i]=-1;
	    	}
	    }
	    for(i=1;i<=n;i++)
	    {
	    	if(a[i]==1)
	    	{   no_boy++;
	    	    if(i%2==0)
	    	    { c_even++;
	    	    }
	    	    else
	    	    {  c_odd++;
	    	    }
	    	}
	    	else
	    	{  no_girl++;
	    	}
	    }   
	        cost=0;m=1;k=1;cost1=0;cost2=0;
	        count=no_boy-no_girl;
	        if(count==0)
	        {   if(a[1]==1)
	            { p=1;
	            q=-1;
	            }
	            
	    
	        	if((c_even>c_odd)||((c_even==c_odd)&&(q==-1)))
	        	{
	        		for(i=1;i<=n;i++)
	        		{
	        			if((a[i]==1)&&(i%2!=0))
	        			{   boy[k++]=i;
	        			}
	        			if((a[i]==-1)&&(i%2==0))
	        		    {  girl[m++]=i;
	        		    }
					}
					for(i=1;i<k;i++)
					{   z=fabs(boy[i]-girl[i]);
					     if(z!=0)
					     {cost1=cost1+pow(z,type);
					     }
					     else
					     {  cost1=0;
					     }
					}
					if(c_even>c_odd)
					{  cost=cost1;
					}
	        	}
	        	if((c_even<c_odd)||((c_even==c_odd)&&(p==1)))
	        	{   for(i=1;i<=n;i++)
	        		{
	        			if((a[i]==1)&&(i%2==0))
	        			{   boy[k++]=i;
	        			}
	        			if((a[i]==-1)&&(i%2!=0))
	        		    {  girl[m++]=i;
	        		    }
					}
					for(i=1;i<k;i++)
					{   z=fabs(boy[i]-girl[i]);
					     if(z!=0)
					     {
					      cost2=cost2+pow(z,type);
					     }
					     else
					     { cost2=0;
					     }
					}
					if(c_even<c_odd)
					{  cost=cost2;
					}
	        	}
	        }
	        else if(count==1)
	        {  for(i=1;i<=n;i++)
	           {  
	               if((a[i]==1)&&(i%2==0))
	               {  boy[k++]=i;
	               }
	               if((a[i]==-1)&&(i%2!=0))
	               {  girl[m++]=i;
	               }
	           }
	           for(i=1;i<k;i++)
	           {  z=fabs(boy[i]-girl[i]);
	              cost=cost+pow(z,type);
	           }
	        }
	        else if(count==-1)
	        {
	        	for(i=1;i<=n;i++)
	           {  
	               if((a[i]==1)&&(i%2!=0))
	               {  boy[k++]=i;
	               }
	               if((a[i]==-1)&&(i%2==0))
	               {  girl[m++]=i;
	               }
	           }
	           for(i=1;i<k;i++)
	           {  z=fabs(boy[i]-girl[i]);
	              cost=cost+pow(z,type);
	           }
	        }
	        else
	        {  cost=-1;
	        }
	        for(i=1;i<=k;i++)
	        {  boy[i]=0;
	           girl[i]=0;
	        }
	        if(cost1>cost2)
	        {  cost=cost2;
	        }
	        else
	        { cost=cost1;
	        }
	        printf("%lld\n",cost);
    }
    return(0);
}
