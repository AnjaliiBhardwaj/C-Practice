#include <iostream>
using namespace std;

void swapRVar(int &a, int &b){
	int temp= a;
	a=b;
	b=temp;
}
int main(){
	int x=4, y=5;
	swapRVar(x,y);
	cout<<"x= "<<x<<" y= "<<y;
	return 0;
}
