#include<stdio.h>
int in[10],fn[10],nu[10][10],count=0;
char mat[10][10];
int main()
{
	int i,j,ctr=0,u=0,k=0;
	char ch;
	FILE *fp;
	fp=fopen("saj.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		if(ch=='\n')
		 ctr++;
	}
	ctr++;
	printf("%d",ctr);
	fseek(fp,0l,0);
	fscanf(fp,"%d",&in[0]);
	/*while(!feof(fp))
    {
    	if(count<2)
			fscanf(fp,"%d",&fn[u++]);
		else
		{
			for(i=0;i<ctr-2;i++)
			{
				for(j=0;j<ctr-2;j++)
				{
					fscanf(fp,"%c",&mat[i][j]);
				}
				for(k=0;k<ctr-2;k++)
				{
					fscanf(fp,"%d",&nu[i][k]);
			    }
			}
		}
	}*/
  	/*for(i=0;i<ctr-2;i++)
	{
		printf("fd");
		for(j=0;j<ctr-2;j++)
		{
			fscanf(fp,"%c",&mat[i][j]);
			printf("ik");
		}
		while(!feof(fp))
		{
			fscanf(fp,"%d",&nu[i][k++]);
			printf("gh");
		}
	}*/ 
	/*while(!feof(fp))
	 fscanf(fp,"%d",&fn[u++]);*/
	//ch=fgetc(fp)
	do
	{
		printf("f");
		ch=fgetc(fp);
		count++;
	}while(ch!=EOF);
	fseek(fp,1l,0);
	for(i=0;i<=count;i++)
		fscanf(fp,"%d",&fn[i]);
	printf("\n%d\n",in[0]);
    for(i=0;i<=count;i++)
  	 printf("%d ",fn[i]);
  	printf("\n");
  	for(i=0;i<ctr-2;i++)
  	{
  		for(j=0;j<ctr-2;j++)
  		 printf("%c ",mat[i][j]);
  		for(k=0;k<ctr-2;k++)
  		 printf("%d ",nu[i][k]);
  		printf("\n");
  	}
  	return 0;
}
