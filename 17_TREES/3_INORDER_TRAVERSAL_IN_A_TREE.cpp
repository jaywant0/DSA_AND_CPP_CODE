#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;


    node(int data){
        this->data = data;
        left  = NULL;
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

    cout<<"Enter data for left "<<data<<"node"<<endl;

    root->left = buildtree();

    cout<<"Enter data for right of "<<data<<"node"<<endl;

    root->right = buildtree();
    
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

void inordertraversal(node* root){
    //base case 
    if(root == NULL){
        return ;
    }
    // left root right LNR
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}


int main()
{
    node* root = NULL;
    root = buildtree();
    // levelordertraversal(root);
    inordertraversal(root);

    

    return 0;
}