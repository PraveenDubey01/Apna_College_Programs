#include<iostream>
using namespace std;
void BubbleSort( int arr[], int size)
{
 	int temp;
	for( int i=0;i<size-1;i++)
 	{
 		for(int j=0;j<size-i-1;j++)
 		{
 			if(arr[j]>arr[j+1])
		{
			temp=arr[j];
		    arr[j]=arr[j+1];
		    arr[j+1]=temp;
		}
		 }
		 
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
 	int arr[]={3, 1, 6, 2, 9};
 	int size=sizeof(arr)/sizeof(int);
 	cout<<"Unsorted Array is:";
    PrintArray(arr,size);
	BubbleSort(arr,size);
	cout<<"\nSorted Array is:";
 	PrintArray(arr,size);
 	return 0;
 }
