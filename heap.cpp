#include <iostream>
using namespace std;
  
// function to heapify the tree
void heapify(int arr[], int n, int root)
{
   int left=2*root+1;int right=2*root+2;int max=root;
   if(arr[left]>arr[max] and left<n) max=left;
   else max=root;
   if(arr[right]>arr[max] and right<n) max=right;
  if (max!=root){
   swap(arr[max],arr[root]);
   heapify(arr,n,max);
  }
}
  
// implementing heap sort
void heapSort(int arr[], int n)
{
   // build heap
   for( int i = n/2-1;i>=0;i--){
      heapify(arr,n,i);
   }
  
   // extracting elements from heap one by one
   for(int i=n-1;i>0;i--){
      swap(arr[i],arr[0]);
      heapify(arr,i,0);
   }
   
}
  
/* print contents of array */
void displayArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
   cout << arr[i] << " ";
   cout << "\n";
}
  
// main program
int main()
{  const int size=10;
   int randomArray[size];
   for(int i=size;i>0;--i)randomArray[i]=(rand()%100);
   //int heap_arr[] = {4,17,3,12,9,6};
   //int n = sizeof(heap_arr)/sizeof(heap_arr[0]);
   cout<<"Input array"<<endl;
   displayArray(randomArray,size);
  
   heapSort(randomArray,size);
  
   cout << "Sorted array"<<endl;
   displayArray(randomArray,size);
   
}