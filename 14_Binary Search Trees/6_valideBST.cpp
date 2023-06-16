#include<iostream>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool solve(TreeNode* root,long long int lb,long long int ub){
        // Base case
        if(root == NULL){
            // Empty tree is a BST
            return true;
        }
        if(root->data > lb && root->data < ub){
            // Check left subtree is a BST or not
            bool leftAns = solve(root->left,lb,root->data);
            // Check right subtree is a BST or not
            bool rightAns = solve(root->right,root->data,ub);
            // Both right and left subtree should be a BST
            return leftAns && rightAns;
        }
        else{
            // Not a BST
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long long int lowerbound = -4294967296;
        long long int upperbound = 4294967296;
        bool ans = solve(root,lowerbound,upperbound);
        return ans;
    }
};  