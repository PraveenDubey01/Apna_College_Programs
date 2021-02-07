#include<iostream>
using namespace std;
void SelectionSort( int arr[], int size)
{
	int minIndex;
 	int temp;
	for( int i=0;i<size-1;i++)
 	{
 		minIndex = i;
 		for(int j=i+1;j<size;j++)
 		{
 			if(arr[minIndex]>arr[j])
 			minIndex = j;
		 }
		 temp=arr[minIndex];
		 arr[minIndex]=arr[i];
		 arr[i]=temp;
	 }
}
 int main()
 {
 	int arr[]={5, 4, 3, 6, 1};
 	int size=sizeof(arr)/sizeof(int);
 	int minIndex;
 	int temp;
 	cout<<"Unsorted Array is:";
 	for(int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
	 }
	 SelectionSort(arr,size);
	 cout<<"\nSorted Array is:";
 	for(int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
	 }
 	return 0;
 }
