//Doubly Linked List
#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* prev;
    Node* next;
    Node( int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;

    }
};
// to print the Doubly linkedlist
void print(Node* head){
    Node* temp =  head;
    while(temp != NULL){
        cout << temp -> data;cout<<" ";
        cout<<endl;
        
        temp = temp -> next;
    }
    cout << endl;
}
// to get the length of linkedlist
int getlen(Node* head){
    int len = 0;
    Node* temp =  head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
return len;
}

// to insert at head in doubly linked list
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;


}
//to insert at end of doubly linked list

void InsertAtTail(Node * &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    temp ->prev = tail;
    tail = temp;
}
// to insert at any position at doubly linkedlist 
void InsertAtPos (Node* tail,Node* &head, int pos, int d){
    //insert at start
    if(pos == 1){       //at start position
        InsertAtHead(head, d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt <pos - 1){
        temp = temp->next;
        cnt++;
    }
    if(temp ->next == NULL){ //last position
 
        InsertAtTail(tail,d);
        return ;
    }

Node* nodetoinsert = new Node(d);
nodetoinsert ->next = temp ->next;
temp ->next ->prev = nodetoinsert;
temp ->next =  nodetoinsert;
nodetoinsert ->prev = temp;

}
int main(){


    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    cout<<endl;
    print(head);
    cout<<endl;
    InsertAtHead(head, 11);
    cout<<endl;
    InsertAtHead(head, 12);
    cout<<endl;
    InsertAtHead(head, 15);
    cout<<endl;
    InsertAtHead(head, 18);
    cout<<endl;
    print(head);
    cout << "The length of DLL is  " << getlen(head);
    cout<<endl;
    InsertAtTail(tail, 12);
    print(head);

    InsertAtPos(tail, head, 2, 100);
    print(head);
    InsertAtPos(tail, head, 1, 102);
    print(head);
    InsertAtPos(tail, head, 5, 10200);
    print(head);

    cout << "The length of DLL is  " << getlen(head);
    cout<<endl;

    return 0;    
}