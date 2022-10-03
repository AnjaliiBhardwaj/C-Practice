#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int odd_sum=0;
    int even_sum=0;
    
    while(n>0){
        int last=n%10;
        if(n%2==0){
            even_sum+=last;
        }
        else{
            odd_sum+=last;
        }
        n=n/10;
    }
    cout<<even_sum<<" "<<odd_sum;
}
