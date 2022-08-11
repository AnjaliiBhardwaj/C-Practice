#include <iostream>
using namespace std;
class sort{
	int arr[];
	int size;
	public : 
	void getArray (int n)
	{
		for (int i=0;i<n;i++){
			cin>>arr[i];
		}
	}
	void printArray ()
	{
		for (int i=0;i<n;i++ ){
			cout<<arr[i]<<" ";
		}
	}
	void insSort ()
	{
		int j;
		int key;
		for (int i=1;i< n;i++){
			j=i-1;
			key=arr[i];
			while (j>=0 && j>key){
				arr[j+1]= arr[j];
				j--;
			}
			arr[j+1]=key;
		}
	}
	
};
int main(){
	//sort arr1;
	arr1.getArray(5);
	arr1.printArray();
	arr1.insSort();
}
