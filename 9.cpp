#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1;
    stack<int> st2;
    int ele;
    cin>>ele;

    while (ele!=-99){
        st1.push(ele);
        cin>>ele;
    }
    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
    }
    while(!st2.empty()){
        st2.push(st1.top());
        st2.pop();
    }
}
