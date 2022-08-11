#include <iostream>
using namespace std;

int fib (int n){
	if (n==0){
		return n;
	}
	
	if (n==1){
		return n;
	}
	
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cin>>n;
	int output = fib(n);
	cout<< fib(n);
}
