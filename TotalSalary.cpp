#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    double b_sal;
    char grade;
    cin>>b_sal>>grade;
    
    double total_sal;
    int allow;
    double hra,da,pf;
    
    hra=0.2*(b_sal);
    da=0.5*(b_sal);
    pf=0.11*(b_sal);
	
     if (grade=='A'){
        allow=1700;
    }
    else if (grade=='B'){
        allow=1500;
    }
    else {
        allow=1300;
    }
    
    total_sal=(b_sal + hra +da + allow -pf);
    int ans= round(total_sal);
    cout<< ans;
}
