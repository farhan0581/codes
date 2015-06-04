#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int t,i,j;
	char c;
	char cs[20][20];
	FILE *f;
	srand(time(NULL));
	f=fopen("file2.txt","w");
	printf("file created\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			t=rand()%2;
			c=48+t;
			scanf("%c",&c);
			fprintf(f,"%c",c);
		}
		fprintf(f,"\n");
    }
    fclose(f);
 for(i=0;i<4;i++)
 {
 	for(j=0;j<4;j++)
 	{
 		 fscanf(f,"%c",&cs[i][j]);
 		 if(fscanf(f,"%c",&cs[i][j])=='\n')
 		 fscanf(f,"\n");
 		 
 	}
 }printf("%c",cs[2][2]);
	return 0;
}
