/*Insert an ele*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> vect;
    int ele;
    int size;
    cin>> size;
    for (int i=0; i<size; i++){
        cin>>ele;
        vect.push_back(ele);
    }

    int index;
    int val;
    cin>>index>>val;
    vect.insert(vect.begin()+index,val);

    for (int i=0;i<vect.size();i++){
        cout<<vect[i];
    }

}
