#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int print(char a[]);
int comp(char a[],char x);
int check(char a[]);
int main()
{ 
     int i,j=0;
     char n;
     int b[4]={0,2,6,8};
	char a[9]={'1','2','3','4','5','6','7','8','9'};
	srand(time(NULL));
	printf("::THIS IS MANUAL::");
	print(a);
	
		 printf("enter your choice:\n");
		 scanf("%c",&n);
		 j++;
	     for(i=0;i<9;i++)
	     {
	    	if(a[i]==n)
	    	a[i]='X';
	     }
	     print(a);
		  if(n=='5')
		  a[b[rand()%4]]='O';
		  else
		  a[4]='O';
		  print(a);
		  j++;
		  fflush(stdin);
	
	for(j=0;j<7;)
	{
	     printf("\nuser enter your choice");
		scanf("%c",&n);
		for(i=0;i<9;i++)
	     {
	    	if(a[i]==n)
	    	a[i]='X';
	     }
	     print(a);
	     check(a);
	     j++;
	     comp(a,n);
	     	if(comp(a,n)==1)
      	{
		j++;}
		check(a);
			print(a);
	     fflush(stdin);
		
	}
	return 0;
}
int print(char a[9])
{
	int i,c=0;
	printf("\n");
	for(i=0;i<9;)
	{
		while(c<3)
		{
			printf("%c\t",a[i]);
			c++;i++;
			
		}
		printf("\n");
			c=0;
	}
}
int comp(char a[],char x)
{
	int m,i;
	m=x-49;
	switch(m)
	{
		case 0:
			{ 
				if(a[0]==a[1])
				{
					if(a[2]=='3')
					a[2]=='O';return 1;
				}
				if(a[0]==a[2])
				{
					if(a[1]=='2')
					a[1]='O';return 1;
				}
				if(a[0]==a[3])
				{
					if(a[6]=='7')
					a[6]='O';return 1;
				}
				if(a[0]==a[6])
				{
					if(a[3]=='4')
					a[3]='O';return 1;
				}
				if(a[0]==a[4])
				{
					if(a[8]=='9')
					a[8]='O';return 1;
				}
				if(a[0]==a[8])
				{
					if(a[4]=='5')
					a[4]='O';return 1;
				}
				else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{
							a[i]='O';printf("jhg");
							return 1;
						}
					}
				}
			}
			case 1:
				{  
					if(a[0]==a[1])
					{
						if(a[2]=='3')
						a[2]='O';return 1;
					}
					if(a[1]==a[2])
					{
						if(a[0]=='1')
						a[0]='O';return 1;
					}
					if(a[1]==a[4])
					{
						if(a[7]=='8')
						a[7]='O';return 1;
					}
					if(a[1]==a[7])
					{
						if(a[4]=='5')
						a[4]='O';return 1;
					}
		            	else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
	
						}
					}
				}
										    
				}
				case 2:
					{    
						if(a[0]==a[2])
						{
							if(a[1]=='2')
							a[1]='O';return 1;
						}
						if(a[1]==a[2])
						{
							if(a[0]=='1')
							a[0]='O';return 1;
						}
						if(a[2]==a[5])
						{
							if(a[8]=='9')
							a[8]='O';return 1;
						}
						if(a[2]==a[8])
						{
							if(a[5]=='6')
							a[5]='O';return 1;
						}
						if(a[2]==a[4])
						{
							if(a[6]=='7')
							a[6]='O';return 1;
						}
						if(a[2]==a[6])
						{
							if(a[4]=='5')
							a[4]='O';return 1;
						}
					    	else 
				{
					for(i=0;i<9;i++)
					{printf("jhg");
						if(a[i]>=49&&a[i]<=57)
						{
							a[i]='O';
							return 1;
							
						}
					}
				}
										
					}
					case 3:
						{ 
							if(a[0]==a[3])
							{
								if(a[6]=='7')
								a[6]='O';return 1;
							}
							if(a[3]==a[6])
							{
								if(a[0]=='1')
								a[0]='O';return 1;
							}
							if(a[3]==a[4])
							{
								if(a[5]=='6')
								a[5]='O';return 1;
							}
							if(a[3]==a[5])
							{
								if(a[4]=='5')
								a[4]='O';return 1;
							}
						    	else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
		}
						}
						case 4:
							{ 
								if(a[3]==a[4])
								{
									if(a[5]=='6')
									a[5]='O';return 1;
								}
								if(a[4]==a[5])
								{
									if(a[3]=='4')
									a[3]='O';return 1;
								}
								if(a[1]==a[4])
								{
									if(a[7]=='8')
									a[7]='O';return 1;
								}
								if(a[4]==a[7])
								{
									if(a[1]=='2')
									a[1]='O';return 1;
								}
								if(a[2]==a[4])
								{
									if(a[6]=='7')
									a[6]='O';return 1;
								}
								if(a[4]==a[6])
								{
									if(a[2]=='3')
									a[2]='O';return 1;
								}
							     	else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
				}
						
							}
							case 5:
								{
									if(a[2]==a[5])
									{
										if(a[8]=='9')
										a[8]='O';return 1;
									}
									if(a[5]==a[8])
									{
										if(a[2]=='3')
										a[2]='O';return 1;
									}
									if(a[4]==a[5])
									{
										if(a[3]=='4')
										a[3]='O';return 1;
									}
									if(a[3]==a[5])
									{
										if(a[4]=='5')
										a[4]='O';return 1;
									}
									else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
				}
							
								}
								case 6:
									{ 
										if(a[0]==a[6])
										{
											if(a[3]=='4')
											a[3]='O';return 1;
										}
										if(a[3]==a[6])
										{
											if(a[0]=='1')
											a[0]='O';return 1;
										}
										if(a[6]==a[7])
										{
											if(a[8]=='9')
											a[8]='O';return 1;
										}
										if(a[6]==a[8])
										{
											if(a[7]=='8')
											a[7]='O';return 1;
										}
										if(a[6]==a[4])
										{
											if(a[2]=='3')
											a[2]='O';return 1;
										}
										if(a[6]==a[2])
										{
											if(a[4]=='5')
											a[4]='O';return 1;
										}
										
										else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
				}
										
									}
								case 7:
									{ 
										if(a[6]==a[7])
										{
											if(a[8]=='9')
											a[8]=='O';return 1;
										}
										if(a[7]==a[8])
										{
											if(a[6]=='7')
											a[6]='O';return 1;
										}
										if(a[4]==a[7])
										{
											if(a[1]=='2')
											a[1]='O';return 1;
										}
										if(a[1]==a[7])
										{
											if(a[4]=='5')
											a[4]='O';return 1;
										}
										else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
				}
										
									}
									case 8:
										{ 
											if(a[5]==a[8])
											{
												if(a[2]=='3')
												a[2]='O';return 1;
											}
											if(a[2]==a[8])
											{
												if(a[5]=='6')
												a[5]='O';return 1;
											}
											if(a[7]==a[8])
											{
												if(a[6]=='7')
												a[6]='O';return 1;
											}
											if(a[6]==a[8])
											{
												if(a[7]=='9')
												a[7]='O';return 1;
											}
											if(a[4]==a[8])
											{
												if(a[0]=='1')
												a[0]='O';return 1;
											}
											if(a[0]==a[8])
											{
												if(a[4]=='5')
												a[4]='O';return 1;
											}
										else 
				{
					for(i=0;i<9;i++)
					{
						if(a[i]>=49&&a[i]<=57)
						{printf("jhg");
							a[i]='O';
							return 1;
						}
					}
				}
										}
	}
}
int check(char a[])
{
     if(a[0]==a[1]&&a[1]==a[2])
	 {
	 	if(a[0]=='X')
	 	printf("\nuser wins");
	 	else
	 	printf("\ncomp wins");
	 }	
	 if(a[3]==a[4]&&a[4]==a[5])
	 {
	 	if(a[3]=='X')
	 	printf("\nuser wins");
	 	else
	 	printf("\ncomp wins");
	 }
	 if(a[6]==a[7]&&a[7]==a[8])
	 {
	 	if(a[6]=='X')
	 	printf("\nuser wins");
	 	else
	 	printf("\ncomp wins");
	 }
	 if(a[0]==a[4]&&a[4]==a[8])
	 {
	 	if(a[0]=='X')
	 	printf("\nuser wins");
	 	else
	 	printf("\ncomp wins");
	 	
	 }
	 if(a[2]==a[4]&&a[4]==a[6])
	 {
	 	if(a[2]=='X')
	 	printf("\nuser wins");
	 	else
	 	printf("\ncomp wins");
	 }
}
