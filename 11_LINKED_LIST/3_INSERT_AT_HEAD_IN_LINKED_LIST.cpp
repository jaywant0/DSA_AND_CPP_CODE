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
    node* head = new node(80);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);

    print(head);

    return 0;
}