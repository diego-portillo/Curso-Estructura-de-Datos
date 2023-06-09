//Divide : Divide the n-element array into two n/2-element subarrays.
//Conquer : Sort the two subarrays recursively using merge sort
//Combine : Merge the two sorted subsequences to form the sorted array

#include<stdio.h>

int main()
{
  int i;
  int n=6;  
  int arr[]={100, 1992, 0, 5, -1, 888};

  printf("Unsorted array:\n");  // print unsorted array
  for(i=0;i<n;i++)
    printf("%d \n",arr[i]);

  merge_sort(arr,0,n-1,n);  // sort the array
  
  printf("Sorted array:\n");  // print sorted array
  for(i=0;i<n;i++)
    printf("%d \n",arr[i]);
  
  return 0;
}

int merge_sort(int arr[],int low,int high, int length)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
   // Divide and Conquer
    merge_sort(arr,low,mid, length);
    merge_sort(arr,mid+1,high, length);
   // Combine
    merge(arr,low,mid,high, length);
  }
  
  return 0;
}

int merge(int arr[],int l,int m,int h, int length)
{
  int arr1[length],arr2[length];  // Two temporary arrays to hold the two arrays to be merged
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0;i<n1;i++)
    arr1[i]=arr[l+i];
  for(j=0;j<n2;j++)
    arr2[j]=arr[m+j+1];

  arr1[i]=9999;  // To mark the end of each temporary array
  arr2[j]=9999;

  i=0;j=0;
  for(k=l;k<=h;k++)  //process of combining two sorted arrays
  {
    if(arr1[i]<=arr2[j])
      arr[k]=arr1[i++];
    else
      arr[k]=arr2[j++];
  }
  
  return 0;
}