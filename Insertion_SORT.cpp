#include<iostream>
using namespace std;
void InsertionSort( int arr[], int size)
{
 	int temp;
 	int minIndex;
	for( int i=0;i<size-1;i++)
 	{
 		minIndex=i;
 		for(int j=i+1;j<size;j++)
 		{
 			if(arr[minIndex]>arr[j])
 			minIndex=j;
		}
			temp = arr[i];
		    arr[i] = arr[minIndex];
		    arr[minIndex] = temp;
	}	 
}
void PrintArray(int arr[], int size)
{
	for(int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
}
int main()
 {
 	int arr[]={97, 27, 5879, 87, 43};
 	int size=sizeof(arr)/sizeof(int);
 	cout<<"Unsorted Array is:";
    PrintArray(arr,size);
	InsertionSort(arr,size);
	cout<<"\nSorted Array is:";
 	PrintArray(arr,size);
 	return 0;
 }
