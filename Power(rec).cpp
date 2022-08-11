# include <iostream>
using namespace std;

int Power(int x, int n){
	if (n==0){
		return 1;	
	}
	if (n==1){
		return x;
	}
	
	int SmallOutput= Power(x,n-1);
	return x*SmallOutput; 
}
int main() {
	int x, n;
	cin >> x >>n;
	int output =  Power(x, n);
	cout<< output;
}
