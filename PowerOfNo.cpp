#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x,n;
    cin>>x>>n;
    if(x >=0 && n==0){
        cout<<"1";
    }
    else if (x==0 && (n>=1 && n<=1000)){
        cout<<"0";
    }
    else{
        cout<<int(pow(x,n));
    }
    
}
