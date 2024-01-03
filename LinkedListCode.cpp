#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtHead(Node* &head, int d){
    //New node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
// method for printing LeinkedlIst
void print(Node* &head){
    Node* temp =head;
    while(temp != NULL){ 
    cout << temp -> data <<" "<<endl;
    temp = temp -> next;
    
    }


}



int main(){
Node* node1 = new Node(20);
cout << node1 ->data << endl;
cout << node1 ->next << endl;

Node* head = node1;
print(head);
InsertAtHead(head,12);
cout << " " << endl;
InsertAtHead(head,10);
InsertAtHead(head,30);

print(head);


}       