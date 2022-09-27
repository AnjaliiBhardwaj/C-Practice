#include <bits/stdc++.h>
using namespace std;
void insert_bottom(stack <int> &st,int x); // Forward declaration  of "insert_bottom " function
void reverse(stack<int> &st)
{
    // Base case
    if (st.empty())
        return;
    int n = st.top();
    st.pop();
    // Recursive call
    reverse(st);

    insert_bottom(st, n);
}
void insert_bottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int d = st.top();
    st.pop();
    insert_bottom(st, x);
    st.push(d);
}
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    stack<int> st;
    int n;
    cout << "Enter the number of element you wish to insert in the stack: ";
    cin >> n;
    cout << "Now enter the elements : ";
    while (n--)
    {
        int ele;
        cin >> ele;
        st.push(ele);
    }
    reverse(st);
    display(st);
    return 0;
}
