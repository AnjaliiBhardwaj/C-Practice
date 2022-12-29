/* Reverse a stack */
/*#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int ele;
    cin>>ele;
    while (ele!=-99){
        st.push(ele);
        cin>>ele;
    }
    while (!st.empty()){
        cout<<st.top ( )<<" ";
        st.pop();
    }
}*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int ele;
    cin>>ele;

    while (ele!=-99){
        st.push(ele);
        cin>>ele;
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
