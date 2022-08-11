#include <iostream>;
using namespace std;
int c = 10; //global var

int main (){
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	cout<<"The sum is"<<c<<endl;
	cout<<"The global c is"<<::c;
}
