#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i=0,n,j=0,m=0,it=1,st,l,k;
	char a[20],c;
	printf("enter the elemets and choice\n");
	while(1)
	{
		printf("enter choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					printf("enter element");fflush(stdin);
					scanf("%c",&a[i]);printf("%c",a[i]);
					i++;
					break;
				}
				case 2:
					{   i++;
						k=(log(i))/(log(2));printf("%d\n",k);

                       	    while(it<=k)
                       	    {
                       	    	while(st<pow(2,j))
                       	    	{
                       	    		for(l=0;l<i/2;l++)
                       	    		{
                       	    			printf(" ");
                       	    		}
                       	    		printf("%c",a[m]);
                       	    		m++;
                       	    		st++;
                       	    	}
                       	    	st=0;
                       	    	printf("\n");
                       	    	i=i/2;
                       	    	it++;j++;
                       	    }
                
                
		}
	}
	
}
return 0;
}
