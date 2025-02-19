#include<bits/stdc++.h>
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

int sizeOfTree(Node* root){
    if(root==NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

bool isCBT(Node* root){
    queue<Node*> q;
    q.push(root);
    int n = sizeOfTree(root);
    int count = 0;
    while(count<n){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    if(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}

bool isMin(Node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val>root->left->val) return false;
    if(root->right!=NULL && root->val>root->right->val) return false;
    return isMin(root->left) && isMin(root->right);
}

int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = NULL;
    Node* g = new Node(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // solution
    cout<<isMin(a)<<endl;
    if(isCBT(a) && isMin(a)) cout<<"Tree is Maxheap";
    else cout<<"Tree is not a max heap";
}