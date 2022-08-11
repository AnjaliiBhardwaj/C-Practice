#include <iostream>
using namespace std;
int Print_num(int n){
	if(n<=1){
		cout<<1<<" ";
		return 0;
	}
	print(n-1);
	cout<< n <<" ";
}
int main(){
	int n;
	cin>>n;
	int result= Print_num (n);
}
