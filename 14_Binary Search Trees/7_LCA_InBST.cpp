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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case
        if(root == NULL)
            return NULL;
        // Case 1 : Answer is in left
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        // Case 2 : Answer is in right
        else if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        // Case 3 : Answer is root
        else
            return root;
    }
};