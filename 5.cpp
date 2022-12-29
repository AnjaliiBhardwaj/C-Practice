/* top of stack */
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int ele;
    cin>>ele;
    while(ele!=-99){
        st.push(ele);
        cin>>ele;
    }
    cout<< st.top();
}