/* K node from end*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insertAtEnd(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
    }
}
void print(Node *p)
{
    for (; p != NULL; p = p->next)
        cout << p->data << " ";
    cout << endl;
}
int ValueAt(Node *head, int k)
{
    Node *pTemp = head;
    Node *KthNode = head;
    int cnt = 0;
    for (; cnt < k - 1; cnt++)
        pTemp = pTemp->next;
    while (pTemp->next != NULL)
    {
        KthNode = KthNode->next;
        pTemp = pTemp->next;
    }
    return KthNode->data;
} 
int main()
{
    Node *head = NULL;
    cout << "Enter the elements you wish to enter in the Linked list and enter -99 to terminate : ";
    int ele;
    cin >> ele;
    while (ele != -99)
    {
        insertAtEnd(head, ele);
        cin >> ele;
    }
    cout << "Linked list is: ";
    print(head);
    int k;
    cout << "Enter the node number you wish to find from the end : ";
    cin >> k;
    cout << "The value at the " << k << " node from the end is: " << ValueAt(head, k);
    return 0;
}