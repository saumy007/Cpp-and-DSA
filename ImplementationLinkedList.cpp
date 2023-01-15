// linked list implementation
// insertion at beginning and Inserion at the end

#include<iostream>
using namespace std;
class Node{

    public :
    int data ;
    Node* next ;
    // constructor usage
    Node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }

    ~Node(){
        // code to free the memory
        int value = this ->data;
        if(this->next !=NULL){
            delete next;
            this ->next = NULL; 
        }
        cout<<"memory is free for data " << value << endl;
    }
};



void InsertAtHead(Node* &head, int d){
   
   Node* temp =  new Node(d);
   temp-> next =  head;
   head = temp;

}




void InsertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail ->next =temp;
    tail = temp;
}


void InsertAtPos(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        InsertAtHead(head,d);
        return ;

    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp ->next;
        cnt++;
    }

    while(cnt < position -1){
        temp = temp ->next;
        InsertAtTail(head,d);
        return ;
    }
    Node* nodetoInsert = new Node(d);
    
    nodetoInsert -> next = temp ->next;
    
    temp -> next = nodetoInsert;

}



void print(Node* &head){
     Node* temp = head ;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<< endl;
}


void deletNode(int position, Node* head){
    if(position == 1){
        Node* temp;
        head = head->next;
        //memory free karadi
        temp ->next = NULL;
        delete temp;
    
    }
    else{
        // deleting any middle value from the given 
        Node* curr = head; 
        Node* prev = NULL;
        int cnt = 1;
        while(cnt <= position){

            prev =  curr;
            curr = curr->next;
            cnt++;
        }
        prev ->next = curr->next;

        delete curr;
    }
}



int main(){
    //create a new node
    Node* node1 = new Node(2);
    //cout << node1 -> data << endl ;
    //cout << node1 -> next << endl ;
    Node* head = node1;
    Node* tail = node1;

    print(head);
    
    //head pointed to new node
    
    //InsertAtHead(head, 3);
    InsertAtTail(tail, 10);
    print(head);
    InsertAtHead(head, 5);
    print(head);
    InsertAtPos(tail,head, 3, 6);
    print(head);
    InsertAtPos(tail,head, 3, 5);
    print(head);
    cout<<" head " << head->data<<endl;
    cout<<" tail "<<  tail->data<<endl;
    deletNode(3, head);
    print(head);
    return 0;
}