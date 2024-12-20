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

node* reverse(node* &prev, node* &curr){
    // base case
    if(curr == NULL){
        return prev;
    }
    node* forward = curr->next;
    curr->next = prev;
    reverse(curr,forward);
}



int main()
{



    return 0;
}