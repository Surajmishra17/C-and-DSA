#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0; // Base case: empty tree has depth 0
        if (!root->left) return 1 + minDepth(root->right); // No left child
        if (!root->right) return 1 + minDepth(root->left); // No right child
        return 1 + min(minDepth(root->left), minDepth(root->right)); // Both children present
    }
};

int main(){
    return 0;
}