//#include<algorithm>
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long long long long long long long long long long long long long int i,a[10];
//	cout<<"enter\n";
//	for(i=0;i<10;i++)
//	{
//		cin>>a[i];
//	}
//	std::sort(std::begin(a), std::end(a));
//	return 0;
//}
#include<stdlib.h>
#include<stdio.h>
 
/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(long long int arr[],long long int l,long long int m,long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
 
    /* create temp arrays */
    long long int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {
        long long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 
 
/* UITLITY FUNCTIONS */
/* Function to print an array */
void printArray(long long int A[],long long int size)
{
    long long int i;
    for (i=0; i < size; i++)
        printf("%lld ", A[i]);
    printf("\n");
}
 
/* Driver program to test above functions */
int main()
{
    long long int arr[100005],i,n,q,l,r; 
    //printf("enter the values\n");
    
    scanf("%lld%lld",&n,&q);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    
    long long int arr_size = n;
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    while(q--)
    {
	    scanf("%lld%lld",&l,&r);
	    if(l==r)
	    {
	    	printf("%lld %lld\n",arr[l-1],arr[l-1]);
	    }
	    else
	    {    	
			printf("%lld 1\n",arr[r-1]);
	    }
    }
    
    
    
    return 0;
}
