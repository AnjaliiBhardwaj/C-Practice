#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        int k=i;
        
        for(int y=1;y<=i;y++){
            cout<<k;
            k--;
        }
        k=k+2;
        for(int j=1;j<=i-1;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}
