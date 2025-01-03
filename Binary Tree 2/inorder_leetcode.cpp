#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> ans;
        TreeNode* curr = root;
        while(curr!=nullptr){
            if(curr->left!=NULL){
                TreeNode* pred = curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred = pred->right;
                }
                if(pred->right==NULL){
                    pred->right = curr;
                    curr = curr->left;
                }
                else{
                    pred->right = nullptr;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};
int main(){

}