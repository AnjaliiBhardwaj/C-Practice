#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,q;
	cin>>n>>q; 
    int sum=0; 
   
    int prod=1; 
    for(int i=1;i<=n;i++){ 
        if (q==1){ 
            sum = sum +i; 
        }  
        else { 
            prod =prod * i; 
        } 
    } 
    if (q ==1){ 
         cout<<sum<<endl; 
    } 
    else if(q==2){ 
     cout<<prod<<endl; 
    }
    else{
        cout<<-1;
    }
}
