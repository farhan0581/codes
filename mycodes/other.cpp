#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
           int n,k,a[50],i,j;
           scanf("%d%d",&n,&k);
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           int sum=0;
           
                      {
              for(j=0;j<n;j++)
                       {
                                  if(a[j]%2==0)
                                  sum++;
                                  
                                  
                                  }
                                  if(k==0 && sum==n)
                                  printf("NO\n");
                                  else if(sum>=k)
                                  printf("YES\n");
                                  else
                                  printf("NO\n");
                                  }
                                      }   
    return 0;
}
 
