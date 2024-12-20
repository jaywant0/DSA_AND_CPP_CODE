#include <iostream>
#include <algorithm>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(){
        this-> data = 0;
        this-> next = NULL;
    }
     node(int data){
        this-> data = data;
        this-> next = NULL;
     }
};
         // i want to insert a node right at the head of linked list
void insertathead(node* &head, node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;  
    }
       //    step 1 = create a node
       node* newnode = new node(data);
       //     step 2 = 
       newnode -> next = head;
 
       head = newnode;
 }

 void insertattail(node* &head,node* &tail, int data){
     // create a node
      if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;  
    }
      node* newnode = new node(data);
    
      tail-> next = newnode;

      // step 3 update
     tail = newnode;
 }
 int findlength(node* &head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        temp = temp-> next;
        len++;
    }
}
 void insertatposition(int data, int position,node* &head, node* &tail){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    int len = findlength(head);
    if(position == len){
        insertathead(head,tail,data);
        return;
    }
    int i = 1;
    node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    node* curr = prev->next;

    node* newnode = new node(data);

    newnode-> next = curr;

    prev-> next = newnode;
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
    node* head = NULL;
    node* tail = NULL; 
    insertathead(head,tail,20); 
    insertathead(head,tail,30); 
    insertathead(head,tail,40); 
    insertathead(head,tail,50);  

    insertattail(head,tail,60);
    insertattail(head,tail,70);
    insertattail(head,tail,80);
    insertattail(head,tail,90 );

    print(head);
    cout<<endl;
    insertatposition(101,8,head,tail);
    cout<<"at any postiion"<<endl;
    print(head);

    
    return 0;
 }