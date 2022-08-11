#include <iostream>
using namespace std;

int SelectionSort(int arr[], int n){
	for (int i=0; i<n-1;i++){
		int min =arr[i], midIndex=i;
		for (int j=i+1;j<n;j++){
			if (arr[j]<min){
				min =arr[j];
				midIndex =j;
			}
		}
		//Swap
		int temp =arr[i];
		arr[i]=arr[midIndex];
		arr[midIndex]= temp;
	}
	
	for (int i=0;i<n;i++){
		cout<<arr[i]<< " ";
	}
	
}
int main (){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>> arr[i];
	}
	
	int result= SelectionSort ( arr,n);
}
