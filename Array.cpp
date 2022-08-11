#include <iostream>
using namespace std;

int main(){
	//Array Examples
	
	int marks[4]={2,3,44,553};
	
	int mathMarks[5];
	 mathMarks[0]=10;
	 mathMarks[1]=40;
	 mathMarks[2]=20;
	 mathMarks[3]=0;
	 mathMarks[4]=50;
	
	cout<<marks[3]<<endl;
	cout<<mathMarks[0]<<endl;
	
	for (int i=0; i<4;i++){
		cout<<"THe value of marks "<< i <<" is "<<marks[i]<<endl;
		
	}
	
	//Pointers and arrays
	
	int* p= marks;
	cout<<"The value of marks[0] is "<<*p;
	cout<<"The value of marks[0] is "<<*p+1;
	cout<<"The value of marks[0] is "<<*p+2;
	
	return 0;
}
