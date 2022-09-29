/*Print the following pattern
Pattern for N = 4


The dots represent spaces.*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>> n;
    
    int i=1;
    
    
    while (i<=n){
        int j=1;
        int space=1;
        while (space <=n-i){
            cout<<" ";
            space++;
        }
        while (j<=i){
            cout<<j+i-1;
            j++;
        }
        cout<<endl;
        i++;
    }
}