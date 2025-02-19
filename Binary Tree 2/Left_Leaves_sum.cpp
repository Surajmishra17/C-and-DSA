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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        if(root->left){
            if(!root->left->left && !root->left->right){
                ans += root->left->val;
            }
            else ans += sumOfLeftLeaves(root->left);
        }
        ans += sumOfLeftLeaves(root->right);
        return ans;
    }
};
int main(){

}