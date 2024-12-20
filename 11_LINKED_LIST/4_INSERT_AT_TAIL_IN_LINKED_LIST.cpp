#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node* &head, int data){
    // create a node
    node* newnode  = new node(data);
    // step 2
    newnode-> next = head;
    // step 3
    head = newnode;
}


void insertattail(node* head, node* &tail, int data){
    
    node* newnode = new node(head, data);

    if(tail == NULL){
        tail = newnode;
        head = newnode;
    }
    else{
        tail-> next = newnode;
    }
    tail = newnode;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
         temp = temp -> next;
    }
}





int main()
{
    // node* head = new node(10);
    node* head = NULL;
    node* tail = NULL;
    insertathead(head,20);
    insertathead(head,30);
    insertattail(head,tail,40);
    insertattail(head,tail,50);

    print(head);

    return 0;
}