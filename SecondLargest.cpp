#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;

    int num;

    int max=INT_MIN , secondMax=INT_MIN;

    int i=1;

    while(i<=n){

        cin>>num;

        if(num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax && num!=max){
            secondMax=num;
        }
        i++;
    }
    cout<< secondMax<<endl;
    
}