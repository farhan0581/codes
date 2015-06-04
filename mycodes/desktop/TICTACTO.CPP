#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void splayer();
void mplayer();
void main()
{
int ch;
clrscr();
printf("WELCOME TO TIC TAC TOE!\nPLEASE ENTER YOUR MODE:-\n1.SINGLE PLAYER\n2.MULTIPLAYER\n");
scanf("%d",&ch);
clrscr();
switch(ch)
{
case 1:splayer();
       break;
case 2:mplayer();
       break;
default:printf("Wrong Choice");
	break;
}
getch();
}
void mplayer()
{
clrscr();
char a[3][3],m='X';
int i,j,k,b,c=1,l=1,flag=0,r[9],p=0,q,f;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a[i][j]=l;
printf(" %d |",a[i][j]);
l++;
}
printf("\n");
}
printf("\n\t\tMULTIPLAYER\n\n\tPLAYER 1:'X'\n\tPLAYER 2:'0'\n");
for(k=0;k<4;k++)
{
printf("Player %d(%c) Enter Choice(1-9):",c,m);
scanf("%d",&b);
r[p]=b;
p++;
if(k>0)
{
do
{
for(q=0;q<p-1;q++)
{
f=1;
if(r[q]==b)
{
printf("\nChoice Already Taken...Please Enter A Vacant Place Value:");
scanf("%d",&b);
f=0;
break;
}
}
}while(f==0);
}
else
{
r[p]=b;
p++;
}
switch(b)
{
case 1:if(k%2==0)
       {
       a[0][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[0][0]='0';
       c=1;
       m='X';
       }
       break;
case 2:if(k%2==0)
       {
       a[0][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[0][1]='0';
       c=1;
       m='X';
       }
       break;
case 3:if(k%2==0)
       {
       a[0][2]='X';
       c=2;
       m='0';
       }
       else
       {

       a[0][2]='0';
       c=1;
       m='X';
       }
       break;
case 4:if(k%2==0)
       {
       a[1][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][0]='0';
       c=1;
       m='X';
       }
       break;
case 5:if(k%2==0)
       {
       a[1][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][1]='0';
       c=1;
       m='X';
       }
       break;
case 6:if(k%2==0)
       {
       a[1][2]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][2]='0';
       c=1;
       m='X';
       }
       break;
case 7:if(k%2==0)
       {
       a[2][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][0]='0';
       c=1;
       m='X';
       }
       break;
case 8:if(k%2==0)
       {
       a[2][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][1]='0';
       c=1;
       m='X';
       }
       break;
case 9:if(k%2==0)
       {
       a[2][2]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][2]='0';
       c=1;
       m='X';
       }
       break;
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]=='X'||a[i][j]=='0')
{
printf(" %c |",a[i][j]);
}
else
{
printf(" %d |",a[i][j]);
}
}
printf("\n");
}
}
for(k=0;k<5;k++)
{
printf("Player %d(%c) Enter Choice(1-9):",c,m);
scanf("%d",&b);
r[p]=b;
p++;
do
{
for(q=0;q<p-1;q++)
{
f=1;
if(r[q]==b)
{
printf("\nChoice Already Taken...Please Enter A Vacant Place Value:");
scanf("%d",&b);
f=0;
break;
}
}
}while(f==0);
switch(b)
{
case 1:if(k%2==0)
       {
       a[0][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[0][0]='0';
       c=1;
       m='X';
       }
       break;
case 2:if(k%2==0)
       {
       a[0][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[0][1]='0';
       c=1;
       m='X';
       }
       break;
case 3:if(k%2==0)
       {
       a[0][2]='X';
       c=2;
       m='0';
       }
       else
       {
       a[0][2]='0';
       c=1;
       m='X';
       }
       break;
case 4:if(k%2==0)
       {
       a[1][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][0]='0';
       c=1;
       m='X';
       }
       break;
case 5:if(k%2==0)
       {
       a[1][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][1]='0';
       c=1;
       m='X';
       }
       break;
case 6:if(k%2==0)
       {
       a[1][2]='X';
       c=2;
       m='0';
       }
       else
       {
       a[1][2]='0';
       c=1;
       m='X';
       }
       break;
case 7:if(k%2==0)
       {
       a[2][0]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][0]='0';
       c=1;
       m='X';
       }
       break;
case 8:if(k%2==0)
       {
       a[2][1]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][1]='0';
       c=1;
       m='X';
       }
       break;
case 9:if(k%2==0)
       {
       a[2][2]='X';
       c=2;
       m='0';
       }
       else
       {
       a[2][2]='0';
       c=1;
       m='X';
       }
       break;
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]=='X'||a[i][j]=='0')
{
printf(" %c |",a[i][j]);
}
else
{
printf(" %d |",a[i][j]);
}
}
printf("\n");
}
if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'))
{
printf("\nCONGRATULATIONS!!PLAYER 1 WINS!!\n");
flag=1;
break;
}
else if((a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0')||(a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]=='0')||(a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0')||(a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0')||(a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0')||(a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]=='0')||(a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0')||(a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0'))
{
printf("\nCONGRATULATIONS!!PLAYER 2 WINS!!\n");
flag=1;
break;
}
}
if(flag==0)
{
printf("\nIts A Draw!");
}
}
void splayer()
{
clrscr();
randomize();
char a[3][3];
int r[9],i,j,l=1,k,b,c,flag=0,p=0,q,f;
printf("\n\t\tSINGLE PLAYER\n\n\tCPU:'X'\n\tPLAYER:'0'\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a[i][j]=l;
printf(" %d |",a[i][j]);
l++;
}
printf("\n");
}
for(k=0;k<4;k++)
{
if(k%2==0)
{
printf("Player(0) Enter Choice(1-9):");
scanf("%d",&b);
if(k!=0)
{
do
{
for(q=0;q<p;q++)
{
f=1;
if(r[q]==b)
{
printf("\nChoice Already Taken...Please Enter A Vacant Place Value:");
scanf("%d",&b);
f=0;
break;
}
}
}while(f==0);
r[p]=b;
p++;
}
else
{
r[p]=b;
p++;
}
switch(b)
{
case 1:a[0][0]='0';
       break;
case 2:a[0][1]='0';
       break;
case 3:a[0][2]='0';
       break;
case 4:a[1][0]='0';
       break;
case 5:a[1][1]='0';
       break;
case 6:a[1][2]='0';
       break;
case 7:a[2][0]='0';
       break;
case 8:a[2][1]='0';
       break;
case 9:a[2][2]='0';
       break;
}
}
else
{
c=random(9)+1;
do
{
for(q=0;q<p;q++)
{
f=1;
if(r[q]==c)
{
c=random(9)+1;
f=0;
break;
}
}
}while(f==0);
r[p]=c;
p++;
switch(c)
{
case 1:a[0][0]='X';
       break;
case 2:a[0][1]='X';
       break;
case 3:a[0][2]='X';
       break;
case 4:a[1][0]='X';
       break;
case 5:a[1][1]='X';
       break;
case 6:a[1][2]='X';
       break;
case 7:a[2][0]='X';
       break;
case 8:a[2][1]='X';
       break;
case 9:a[2][2]='X';
       break;
}
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]=='X'||a[i][j]=='0')
{
printf(" %c |",a[i][j]);
}
else
{
printf(" %d |",a[i][j]);
}
}
printf("\n");
}
}
for(k=0;k<5;k++)
{
if(k%2==0)
{
printf("Player Enter Choice(1-9):");
scanf("%d",&b);
do
{
for(q=0;q<p;q++)
{
f=1;
if(r[q]==b)
{
printf("\nChoice Already Taken...Please Enter A Vacant Place Value:");
scanf("%d",&b);
f=0;
break;
}
}
}while(f==0);
r[p]=b;
p++;
switch(b)
{
case 1:a[0][0]='0';
       break;
case 2:a[0][1]='0';
       break;
case 3:a[0][2]='0';
       break;
case 4:a[1][0]='0';
       break;
case 5:a[1][1]='0';
       break;
case 6:a[1][2]='0';
       break;
case 7:a[2][0]='0';
       break;
case 8:a[2][1]='0';
       break;
case 9:a[2][2]='0';
       break;
}
}
else
{
c=random(9)+1;
do
{
for(q=0;q<p;q++)
{
f=1;
if(r[q]==c)
{
c=random(9)+1;
f=0;
break;
}
}
}while(f==0);
r[p]=c;
p++;
switch(c)
{
case 1:a[0][0]='X';
       break;
case 2:a[0][1]='X';
       break;
case 3:a[0][2]='X';
       break;
case 4:a[1][0]='X';
       break;
case 5:a[1][1]='X';
       break;
case 6:a[1][2]='X';
       break;
case 7:a[2][0]='X';
       break;
case 8:a[2][1]='X';
       break;
case 9:a[2][2]='X';
       break;
}
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]=='X'||a[i][j]=='0')
{
printf(" %c |",a[i][j]);
}
else
{
printf(" %d |",a[i][j]);
}
}
printf("\n");
}
if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'))
{
printf("\nCPU WINS!!\n");
flag=1;
break;
}
else if((a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0')||(a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]=='0')||(a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0')||(a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0')||(a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0')||(a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]=='0')||(a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0')||(a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0'))
{
printf("\nCONGRATULATIONS!!YOU WIN!!\n");
flag=1;
break;
}
}
if(flag==0)
{
printf("\nIts A Draw!");
}
}