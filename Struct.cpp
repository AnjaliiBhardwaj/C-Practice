#include <iostream>
using namespace std;

struct employee{
	/*data*/
	int eId;
	float salary;
	char favChar;
};
int main(){
	struct employee harry;
	harry.eId=123;
	harry.salary=1400000;
	harry.favChar='a';
	cout<<harry.eId<<endl;
	cout<<harry.salary<<endl;
	cout<<harry.favChar<<endl;
}
