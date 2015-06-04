#include<stdio.h>
#include<string.h>
int main()
{
	long int t,c=0,i;
	static int b[27],f;
	char a[100009];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("\n%s",a);
		
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='a'&&b[0]==0)
			{
				b[0]=1;
			}
			else if(a[i]=='b'&&b[1]==0)
			{
				b[1]=1;
			}
			else if(a[i]=='c'&&b[2]==0)
			b[2]=1;
			else if(a[i]=='d'&&b[3]==0)
			b[3]=1;
			else if(a[i]=='e'&&b[4]==0)
			b[4]=1;
			else if(a[i]=='f'&&b[5]==0)
			b[5]=1;
			else if(a[i]=='g'&&b[6]==0)
			b[6]=1;
			else if(a[i]=='h'&&b[7]==0)
			b[7]=1;
			else if(a[i]=='i'&&b[8]==0)
			b[8]=1;
			else if(a[i]=='j'&&b[9]==0)
			b[9]=1;
			else if(a[i]=='k'&&b[10]==0)
			b[10]=1;
			else if(a[i]=='l'&&b[11]==0)
			b[11]=1;
			else if(a[i]=='m'&&b[12]==0)
			b[12]=1;
			else if(a[i]=='n'&&b[13]==0)
			b[13]=1;
			else if(a[i]=='o'&&b[14]==0)
			b[14]=1;
			else if(a[i]=='p'&&b[15]==0)
			b[15]=1;
			else if(a[i]=='q'&&b[16]==0)
			b[16]=1;
			else if(a[i]=='r'&&b[17]==0)
			b[17]=1;
			else if(a[i]=='s'&&b[18]==0)
			b[18]=1;
			else if(a[i]=='t'&&b[19]==0)
			b[19]=1;
			else if(a[i]=='u'&&b[20]==0)
			b[20]=1;
			else if(a[i]=='v'&&b[21]==0)
			b[21]=1;
			else if(a[i]=='w'&&b[22]==0)
			b[22]=1;
			else if(a[i]=='x'&&b[23]==0)
			b[23]=1;
			else if(a[i]=='y'&&b[24]==0)
			b[24]=1;
			else if(a[i]=='z'&&b[25]==0)
			b[25]=1;
		}
		for(i=0;i<26;i++)
		{
			c=c+b[i];
			b[i]=0;
		}
		printf("%ld\n",c);
		c=0;
		
		
	}
	return 0;
}
