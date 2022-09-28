/*Prime No using While loop*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num:";
    cin>>n;

    int i=2;
    int temp=0;

    while ( i<=n-1){
        if (n%i==0){
            temp=1;
        }
         i=i+1;
       
    }
    if (temp!=1){
        cout<<n<<" Is a Prime No"<< endl;
        }
        else{
            cout<<n<<" is Not a Prime No"<<endl;
        }
    
}