#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i = n;
    while(i > 0){
        for(int j = 1; j <= i; j++){
            cout<<i;
        }
        cout<<endl;
        i--;
    }
  
}
