#include <iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
	
	node (int data){
		this -> data = data;
		next= NULL;
	}
};

void print( node * head) // address of 1st node
{ 
   while( head!= NULL){
   	cout << head-> data<< " ";
   	head = head->next;
   }	
}

int main(){
	// statically
	node n1(1);
	node *head= &n1; // stored the address of 1st node 
	node n2(2);      //last node
	node n3(3);
	node n4(4);
	node n5(5);
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	print (head);
	/*n1.next =&n2;    // stored the address of n2 in n1
	cout<< head -> data;
	
	// dynamically
	node *n3= new node(10);
	node*head =n3;
	
	node *n4= new node(20);
	n3 -> next = n4;
	*/
}
