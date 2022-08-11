#include <iostream>
using namespace std;
int main(){
	int n,size ;
	cin>>n;
	cin>>size;
	
	int flag= 0;
	int arr[size];
	for (int i=0;i<n;i++){
		cin >>arr[i];
	}
	
	for (int i=0;i<size;i++){
		if (arr[i]==n){
			cout<< i;
			flag=1;
		}
		
	}
	if (flag==0){
			cout<<-1;
	}

	
	
}
