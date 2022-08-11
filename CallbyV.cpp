#include <iostream>
using namespace std;

int sum(int a, int b){
	int c= a+b;
	return c;
}

void swap(int a, int b){
	int temp = a; //will not swap
	a=b;
	b=temp;
}

// Call By Reference using pointer
void swapP(int* a, int* b){
	int temp = *a;
	*a= *b;
	*b= temp;
}

int main(){
	int x=4 , y=5;
	//cout<<"The sum is "<< sum(5,6);
	swapP(&x,&y);
	cout<<" x= "<<x<<" y= "<<y<<endl;
	return 0;
}

