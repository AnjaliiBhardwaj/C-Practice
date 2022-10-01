#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    double bsal;
    char grade;
    cin>>bsal>>grade;


	double totalsal1;
    double totalsal;
    double hra = (0.20*bsal);
    double da = (0.50*bsal);
    double pf= (0.11*bsal);
    double allow;
	if(grade=='A'){
		allow = 1700;

	}
	else if(grade=='B'){
		allow = 1500;

	}
	else{
		allow = 1300;

	}
   totalsal1=(bsal+hra+da+allow);
    totalsal=totalsal1-pf;
		cout<<llround(totalsal);
	
}
