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
	f=fopen("file1.txt","w+");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			t=rand()%2;
			c=48+t;
			fprintf(f,"%c\t",c);
		}fprintf(f,"\n");
    }
 for(i=0;i<10;i++)
 {
 	for(j=0;j<10;j++)
 	{
 		 fscanf(f,"%c",&cs[i][j]);
 		 if(fscanf(f,"%c",&cs[i][j])=='\n')
 		 fscanf(f,"\n");
 		 printf("%c",cs[i][j]);
 	}
 }

	fclose(f);
	return 0;
}
