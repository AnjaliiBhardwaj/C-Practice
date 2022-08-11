#include <iostream>
using namespace std;
int main(){
	int a,b,num;
	cin>>a>>b;
	
	for (int i=a;i<=b;i++){
		for(int num=2;num<i;num++){
			if (i%num==0){
				break;
			}
			if(num==i){
				cout<<i<<endl;
			}
		}
		return 0;
	}
}
