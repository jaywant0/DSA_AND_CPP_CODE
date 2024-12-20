#include <iostream>
#include<queue>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

int findposition(int arr[], int n, int element){
   for(int i = 0; i<n; i++){
    if(arr[i] == element){
      return i; 
    }
   }

}

node* buildtree(int inorder[], int preorder[], int size, int &preindex, int inorderstart,int inorderend){

  // base case
  if(preindex >= size || inorderstart > inorder){
    return NULL;
  }
  // step A
  int element = preorder[preindex++];
  node* root = new node(element);
  int pos = findposition(inorder,size,element);
  
  //step B root left solve
  root->left = buildtree(inorder,preorder,size,preindex,inorderend, pos-1);

  //step root right solve

  root->right = buildtree(inorder,preorder,size,preindex,pos+1,inorderend);

  return root;
}


void levelordertraversal(node* root){
    queue<node*> q;
    //intially
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        //A
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            //c
            cout<<temp->data<<" ";
            //D
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main() {
  int inorder[] = {40,20,50,10,60,30,70};
  int preorder[] = {10,20,40,50,30,60,70};
  int size = 7;
  int preindex  = 0;
  int inorderstart = 0;
  int inorderend = size - 1;
  node* root = buildtree(inorder, preorder, size, preindex, inorderstart, inorderend);

  cout<<"level order traversal "<<endl;
  levelordertraversal(root);
  
  return 0;
}