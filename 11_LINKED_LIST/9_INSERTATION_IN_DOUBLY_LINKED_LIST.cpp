#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;  
    }
};

int getlenth(node* &head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertathead(node* &head, node* &tail, int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        // non empty case
        node* newnode = new node(data);

        newnode->next = head;

        head-> prev = newnode;

        head = newnode;
    }
}

void insertattail(node* &head, node* &tail, int data){
    // ll is empty
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        // ll is not empty
        node* newnode = new node(data);

        tail->next = new node;

        newnode->prev = tail;

        tail = newnode;
    }
}

void deletfromposition(node* &head, node* &tail, int position){
    // ll is empty
    if(head == NULL){
        cout<<"ll is empty "<<endl;
        return;
    }
    // single node case
    if(head->next = NULL){
        node* temp = head;
        head = NULL;
        temp = NULL;
        delete temp;
        return;
    }
    int len = getlenth(head);
    if(position > len){
        cout<<"plese enter valid "<<endl;
        return ;
    }
    if(position == 1){
        // want to delete the first node
        node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return ;
    }
}

void print(node* &head){
    node* temp = head;
    while(temp != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    node* head = NULL;
    node* tail = NULL;

    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    insertathead(head, tail,101);
    print(head);



    return 0;
}