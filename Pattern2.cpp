#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows:";
    cin>>n;

    int i=1;
    int val=1;
    
    while (i<=n){
        int j=1;
        int space=1;
        while (space<=n-i){
            cout<<" ";
            space++;
        }
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;

    }
}