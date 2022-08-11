#include <iostream>
using namespace std;

int num(int n){
	if (n==1){
		cout<< n <<" ";
		return n;
	}
	int val= num(n-1);
	cout<< n <<" ";
	
}
int main(){
	int n;
	cin>>n;
	
	int Output= num(n);
}
