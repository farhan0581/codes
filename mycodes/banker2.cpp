#include<stdio.h>
int main()
{
	int i=0,a1[5],a2[5],a3[5],m1[5],m2[5],m3[5],n1[5],n2[5],n3[5],c=0,m,count=0;
	int av[3]={3,3,2},rq1,rq2,rq3;
	static int fi[5];
	char z;
	FILE *fp;
	fp=fopen("sample.txt","r");
	printf("allocation        max\n");
    while(fscanf(fp,"%d%d%d%d%d%d",&a1[i],&a2[i],&a3[i],&m1[i],&m2[i],&m3[i])!=EOF)
    {
    	printf("|%d |%d |%d           |%d |%d |%d\n",a1[i],a2[i],a3[i],m1[i],m2[i],m3[i]);
    	i++;
    }
    for(i=0;i<5;i++)
    {
    	n1[i]=m1[i]-a1[i];
    	n2[i]=m2[i]-a2[i];
    	n3[i]=m3[i]-a3[i];
    }
    while(c<3)
    {
    	fflush(stdin);
    	printf("\nwhich process is requesting??\n");
    	scanf("%c%d",&z,&m);
    	printf("enter the request\n");
    	scanf("%d%d%d",&rq1,&rq2,&rq3);
    	if(rq1<=av[0]&&rq2<=av[1],rq3<=av[2])
    	printf("REQUEST GRANTED\n\n");
    	i=0;
    	
    	av[0]=av[0]-rq1;
    	av[1]=av[1]-rq2;
    	av[2]=av[2]-rq3;
    	a1[m]=a1[m]+rq1;
    	a2[m]=a2[m]+rq2;
    	a3[m]=a3[m]+rq3;
    	n1[m]=n1[m]-rq1;
    	n2[m]=n2[m]-rq2;
    	n3[m]=n3[m]-rq3;
    	//printf("the safe sequence is\n");
    	while(fi[0]!=1||fi[1]!=1||fi[2]!=1||fi[3]!=1||fi[4]!=1)
    	{
    		if(n1[i]<=av[0]&&n2[i]<=av[1]&&n3[i]<=av[2]&&fi[i]!=1)
    		{
    			av[0]=av[0]+a1[i];
    			av[1]=av[1]+a2[i];
    			av[2]=av[2]+a3[i];
    			fi[i]=1;
    			printf("P%d->",i);
    		}i++;count++;
    		if(i==5)
    		i=0;
    		if(count==20)
    		{
    			printf("safe sequence not possible\n\n");
    			break;
    		}
    	}
    	c++;i=0;
    	fi[0]=0;fi[1]=0;fi[2]=0;fi[3]=0;fi[4]=0;
    	//av[0]=3;av[1]=3;av[2]=2;
		count=0;
    	
    }
    return 0;
}
