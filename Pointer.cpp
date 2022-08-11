#include <iostream>
using namespace std;
int main(){
	
	int a=3;
	int * b = &a; //b is operator storing the address of a
	cout<<b<<endl; // &a
	//& ---> Address of operator
	
	//* --->(Value at) Dereference operator
	cout<<"The value at address b is "<<*b<<endl;
	
	//*Pointer to Pointer
	int** c =&b;
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The address of b is "<<c<<endl;
	cout<<"The value at address c is "<<*c<<endl;
	cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
}
