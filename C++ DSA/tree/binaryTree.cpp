#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* insertInBinaryTree(node* &root){
    int val;
    cout<<"Enter the val for root :";
    cin>>val;
    root = new node(val);
    if(val == -1) return NULL;

    cout<<"Enter the val for left child of "<<val<<endl;
    root->left = insertInBinaryTree(root->left);

    cout<<"Enter the val for right child of "<<val<<endl;
    root->right = insertInBinaryTree(root->right);

    return root;
}

void inorder(node* root){
    if(root == NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}

void preorder(node* root){
    if(root == NULL) return ;
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right); 
}
void postorder(node* root){
    if(root == NULL) return ;
    inorder(root->left);
    inorder(root->right); 
    cout<<root->data<<" ";
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

int main(){
    node* root = new node(12);
    root->left = new node(10);
    root->left->left = new node(16);
    root->left->right = new node(13);
    root->right =  new node(9);
    levelOrderTraversal(root);
    // inorder(root);
    // node* root = NULL;
    // insertInBinaryTree(root);
    // inorder(root);
    return 0;
}