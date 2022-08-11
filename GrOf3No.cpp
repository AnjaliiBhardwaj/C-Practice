#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>> a>>b>>c;
    
    if (a>b){
    	if (a>b){
    		cout<<a<<endl;
		}
		else{
			cout<<c<<endl;
		}
		
    }
    else{
    	if(b>c){
    		cout<<b<<endl;
		}
		else{
			cout<<c<<endl;//c>b>a
		}
	}
}
