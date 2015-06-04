#include<stdio.h>
#include<conio.h>

int main()
{int i,j,k,p=0;
for(i=2;p<=100;i++)
 {k=0;
 
 for(j=1;j<i;j++)
{if(i==5)
{break;
}

if(i==7)
{break;
}
 
 if(i%j==0)
   {k=k+1;
   }
 }
 
 
  if(k==1)
  {printf("%d\n",i);
  }
  p=p+1;
}

return 0;
}
