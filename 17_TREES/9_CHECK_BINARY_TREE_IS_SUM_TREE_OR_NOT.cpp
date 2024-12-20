#include<iostream>
using namespace std;

class node{
  public:
    int data;
    node* left;
    node* right;

    node(int data){
      this->data = data;
      left = NULL;
      right = NULL;
    }
};

node* buildtree(){
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // step a b c
    node* root = new node(data);

    cout<<"Enter data for left "<<data<<" node"<<endl;

    root->left = buildtree();

    cout<<"Enter data for right of "<<data<<" node"<<endl;

    root->right = buildtree();
    
    return root;


}

int convertintosumtree(node*root)
{ 
   // base case
    if(root == NULL){
        return -2;
     }
    int leftsum = convertintosumtree(root->left);
    int rightsum = convertintosumtree(root->right);
    root->data = leftsum + root->data + rightsum;
   
     return root->data;


}



int main()
{
   node*root = NULL;
   buildtree();
   cout<<convertintosumtree(root);



}