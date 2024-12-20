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

int height(node* root){
    if(root == NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);

    int ans  = max(leftheight, rightheight) + 1;
    return ans;
}

int diameterofbinarysearch(node* root){
    if(root == NULL){
        return 0;
    }
    int option1 = diameterofbinarysearch(root->left);
    int option2 = diameterofbinarysearch(root->right);

    int option3 = height(root->left) + height(root->right);

    int ans = max(option1, max(option2, option3 ));
    return ans;
}






int main()
{
    node* root = NULL;
    root = buildtree();
    // levelordertraversal(root);
    inordertraversal(root);
   int jay =  diameterofbinarysearch(root);
   cout<<endl;
   cout<<jay<<endl;
    

    return 0;
}