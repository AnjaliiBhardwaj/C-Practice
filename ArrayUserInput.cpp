#include <bits/stdc++.h>
using namespace std;
void delete_Middle(stack<int> &St, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        St.pop();
        return;
    }

    int num = St.top();
    St.pop();

    // RECURSIVE CALL
    delete_Middle(St, count + 1, size);

    St.push(num);
}
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    int size, cnt = 0;
    stack<int> st;
    cout << "Enter the size of the stack: ";
    cin >> size;
    int t = size;
    cout << "Now enter the elements: ";
    while (t--)
    {
        int ele;
        cin >> ele;
        st.push(ele);
    }
    cout << "Initial Stack: " ;
    display(st);
    delete_Middle(st, cnt, size);
    cout << "Stack after deleting the middle element is: ";
    display(st);

    return 0;
}
