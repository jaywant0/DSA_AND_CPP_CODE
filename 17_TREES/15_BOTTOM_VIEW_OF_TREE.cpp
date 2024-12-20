#include <iostream>
#include<queue>
#include<map>
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

void bottomview(node* root){
   if(root == NULL){
    return;
   }
  //create a map to store horizontal distancd left = -1 and right = +1;
  map<int,int> topnode;
  //we will create queue to store node and horizontal distance
  queue<pair<node* ,int> > q;
  q.push(make_pair(root,0));

  while(!q.empty()){

    pair<node*,int>  temp = q.front();
    q.pop();
    
    node* frontnode = temp.first;
    int horizontadistance = temp.second;

      //create entry
      topnode[horizontadistance] = frontnode->data;
  
    if(frontnode->left){
      q.push(make_pair(frontnode->right,horizontadistance - 1));
    }
    if(frontnode->right){
      q.push(make_pair(frontnode->right,horizontadistance + 1));
    }
  }
  cout<<"printing the answer of bottomview "<<endl;
  for(auto i: topnode){
    cout<<i.first<<" -> "<<i.second<<endl;
  }
}



int main() 
{
  node* root = buildtree();
  bottomview(root);


  
  
  
  return 0;
}