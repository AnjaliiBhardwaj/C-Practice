#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node (int val) {
        data= val;
        next= NULL;
    }
};

node* takeInput(){
    int data;
    cin >> data;
    node*head = NULL;
    node*tail = NULL;
    
    while (data!=-1){
        node * newnode = new node(data);
        if (head ==NULL){
            head= newnode;
            tail= newnode;
        }
        else{
            tail -> next = newnode;
            tail= newnode;
        }
        cin>> data;
    }
    return head;
}
void print (node*head){
    while (head!=NULL){
        cout<< head -> data << " ";
        head = head -> next;
    }
}

int main(){
    node*head = takeInput();
    print(head);
}
