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

void print(node* &head){
    node* temp = head;
    while(temp != head){
        cout<<temp->data<<" ";
       temp =  temp->next ;
    }
}

int main()
{
    node* first  =   new node(10);
    node* second =   new node(20);
    node* third  =   new node(30);
    node* fourth =   new node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth-> next = first;
    cout<<"print circular linked list"<<endl;
    print(first);

    return 0;
}