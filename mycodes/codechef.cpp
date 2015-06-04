#include <bits/stdc++.h>

using namespace std;



void qsort(int64_t arr[100009][3], int fst, int last)
{
 int i,j,pivot;
 int64_t tmp;
 if(fst<last)
 {
   pivot=fst;
   i=fst;
   j=last;
   while(i<j)
   {
     while(arr[i][0]<=arr[pivot][0] && i<last)
        i++;
     while(arr[j][0]>arr[pivot][0])
        j--;
     if(i<j)
     {
        tmp=arr[i][0];
        arr[i][0]=arr[j][0];
        arr[j][0]=tmp; 
        
        int64_t tmp2;
        tmp2=arr[i][1];
        arr[i][1]=arr[j][1];
        arr[j][1]=tmp2; 
        
     }
   }
   tmp=arr[pivot][0];
   arr[pivot][0]=arr[j][0];
   arr[j][0]=tmp;
   qsort(arr,fst,j-1);
   qsort(arr,j+1,last);
 }
}














int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int64_t s,e;
		cin>>s>>e;
		
		int64_t a[100009][3];
		int n;
		int i=0;
		cin>>n;
		int k=n;
		
		int64_t t[4][3]={ {0,0,0},
							{0,0,0},
						{0,0,0},
						{0,0,0},
					
						};
		int bit[4]={1,1,1};
		
		while(k--)
		{
			
			cin>>a[i][0];
			//	cout<<a[i][0]<< " ";
			cin>>a[i][1];
			i++;
			
			
		}
		int flag=0;
		
		
		
		qsort(a,0,n-1);
		
		
		for(int i=0;i<n;i++)
		{
			cout<<a[i][0];
			cout<<" ";
		 	cout<<a[i][1];
		 	cout<<"\n";
		}
		
		
		
		for(int i=0;i<n;i++)
		{
			
			if(a[i][1]<=s || a[i][0] >=e)
			{
				cout<<"HELLO";
			
				continue;
			}
			
	
	
				
				if(t[0][1]<=a[i][0] || t[0][0]>=a[i][1])
				{
					bit[0]=1;
					
					t[0][0]=a[i][0];
					t[0][1]=a[i][1];
				//	break;
					
				} 
					
	else if(t[1][1]<=a[i][0] || t[1][0]>=a[i][1])
				{
					bit[1]=1;
					
					t[1][0]=a[i][0];
					t[1][1]=a[i][1];
					
				//	break;
				}
	
				else
				{
				
					flag=1;
					printf("NO\n");
					break;
				}
			
			
		}
		
		if(flag==0)
		{
								printf("YES\n");

		}
		
		
	}
	
	
	
	
	
	return 0;
}
