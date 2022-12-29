/* Remove an element from particular index*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vect;
    int ele;
    int size;
    cin>>size;
    for (int i =0;i<size;i++){
        cin>>ele;
        vect.push_back(ele);
    }

    int index;
    cin>>index;
    vect.erase(vect.begin()+index);

    for (int i=0;i<vect.size();i++){
        cout<< vect[i];
    }
}
