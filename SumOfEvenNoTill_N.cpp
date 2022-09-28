#include<iostream>
using namespace std;


int main(){
    int N;
    cout<<"Enter No =";
    cin>> N;
    int sum=0;
    int i=1;
    while(i<=N){
        if (i%2==0){
            sum+=i;  
        }
        i++; 
    }
    cout<<"Sum ="<<sum;
}