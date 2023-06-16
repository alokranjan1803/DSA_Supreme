#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        // Base case
        if(root == NULL){
            return -1;
        }
        // Inorder traversal
        // Left 
        int leftAns = kthSmallest(root->left,k);
        // Valid answer
        if(leftAns != -1){
            return leftAns;
        }
        // Node
        k--;
        if(k == 0){
            return root->val;
        }
        // Right
        int rightAns = kthSmallest(root->right,k);
        return rightAns;
    }
};