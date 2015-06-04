#include<stdio.h>
#include<string.h>
int min();
static int a[10],f[4];
//int b[10],x=0,p[10],ctr=0;
char s[10][10];
int p[4]={2,1,4,3},b[4]={2,1,3,5},temp,temp1;
int main()
{
	int i=0,k=0,x,z,flag,c=0,j,s=0,g[20];
	/*char ch;
	FILE *fp;
	fp=fopen("saj.txt","r");
	while(ch!=EOF)
    {
    	 ch=fgetc(fp);
    	 printf("%c",ch);
    	 if(ch=='\n')
    	  ctr++;
    }
    ctr++;
    fseek(fp,0l,0);
    /*for(i=0;i<ctr;i++)
    {
    	fscanf(fp,"%s",s[x++]);
		fscanf(fp,"%d",&p[i]);
    	fscanf(fp,"%d",&a[i]);
    	fscanf(fp,"%d",&b[i]);
    }
    x=0;
    for(i=0;i<ctr;i++)
    {
    	printf("%s\t%d\t%d\t%d\t",s[x++],p[i],a[i],b[i]);
    }*///return 1;

	do
	{
		flag=0;
	//	for(i=0;i<4;i++)
		//{
			if(c<4)
			{
				a[i++]=1;
				j=min();
				b[j]=b[j]-1;
				s=s+1;
				g[k]=s;
				if(b[j]==0)
				{
					f[j]=1;
					//m[l]=j;
					//l++;//printf("%d\t",s);
				}
				
				//printf("P%d\t",j+1);
				c++;k++;
			}
			else
			{
				for(x=0;x<4;x++)
				{
					for(z=0;z<x;z++)
					{
						if(p[z]<p[x])
						{
							temp=p[x];
							
							p[x]=p[z];
							p[z]=temp;
							temp1=b[x];
							b[x]=b[z];
							b[z]=temp1;
						}
					}
				}
			    s=s+b[j];
			    g[k]=s;
				k++;
				b[j]=0;
				f[j]=1;
				/*if(b[j]==0)
				{
					m[l]=j;l++;//printf("%d\t",s);
				}*/
				//printf("P%d\t",j+1);
			}
		//}
		for(i=0;i<4;i++)
		{
			if(b[i]>0)
			 flag=1;
		}
	}while(flag==1);
printf("\n");

	for(i=0;i<k;i++)
	{
		printf("%d\t",g[i]);
	}
	//to print, what is the sequence of process completion,activate the for loop
	//for(i=0;i<4;i++)
	//printf("%d\t",m[i]);
	
	
	
	return 0;
}
int min()
{
	int st=0,i;
//	nim=p[0];
	for(i=0;i<4;i++)
	{
		if(a[i]==1&&p[i]<p[st]&&f[i]!=1)
		{
			st=i;
		
		}
	}
	printf("%d",st);
	return st;
}
