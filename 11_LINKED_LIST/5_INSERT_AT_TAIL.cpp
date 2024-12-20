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

void insertahead(node* &head, node* &tail , int data){
    if(head == NULL){
        node*newnode = new node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    node * newnode = new node(data);

    newnode -> next = head;
    head = newnode;

}
void insertattail(node* &head, node*  &tail, int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    node* newnode = new node(data);

    tail->next = new node;
    
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
    insertahead(head,tail,20);
    insertahead(head,tail,30);
    insertattail(head,tail,40);
    insertattail(head,tail,50);

    print(head);


    return 0;
}