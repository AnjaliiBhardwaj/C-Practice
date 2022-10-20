#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    a=0;
    b=1;
    
    cout<<a<<" "<<b<<" ";
    for (int i=2; i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    

}