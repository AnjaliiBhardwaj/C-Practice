#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int size){
	int start=0;
	int end= size-1;
	
	while (start <=end){
		int mid = (start + end)/2;
		if (arr[mid] == n){
			return mid;
		}
		
		else if (n <arr[mid] ){
			end=mid-1;
		}
		
		else {
			start =mid +1;
		}
	}
	
	return -1;
}
int main(){
	int size,n;

	
	cin>> size;
	cin>> n;
	int arr[size];
	
	for (int i = 0;i< size;i++ ){
		cin>> arr[i]; 
	}
	
	int result = binarySearch(arr, n , size);
    
         cout << "Element is present at index " << result;
		
	}
