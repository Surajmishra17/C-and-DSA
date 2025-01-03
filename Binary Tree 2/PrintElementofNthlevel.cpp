#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void preorder(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    preorder(root->left,curr+1,level);
    preorder(root->right,curr+1,level);
}
void preorderRev(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    preorder(root->right,curr+1,level);
    preorder(root->left,curr+1,level);
}
void levelorder(Node* root){
    int n = level(root);
    for (int i = 1; i <= n; i++)
    {
        preorder(root,1,i);
        cout<<endl;
    }
}
void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int level;
    cout<<"Enter the value of level : ";
    cin>>level;
    Node* a = new Node(1); 
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    preorder(a,1,level);
    cout<<endl;
    levelorder(a);
    levelOrderQueue(a);
}