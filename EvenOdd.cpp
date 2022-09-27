#include <iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter X value:"<<endl;
    cin>> x ;
    cout<<"Enter Y value:"<<endl;
    cin>> y ;

    if (x%2==0){
        cout<< x <<" is an even number"<<endl;
    }
    else {
        cout<< x <<" is an odd number"<<endl;
    }

    if (y%2==0){
        cout << y <<" is an even number"<<endl;
    }
    else {
        cout<< y <<" is an odd number"<<endl;

    }
}