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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case
        if(root == NULL){
            return NULL;
        }
        // check the current node first
        if(root -> data == p->data){
            return p; // Found p
        }
        if(root -> data == q->data){
            return q; // Found q
        }
        // Ans from left subtree
        TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
        // Ans from right subtree
        TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);
        // Answer not found
        if(leftAns == NULL && rightAns == NULL){
            return NULL;
        }
        // Ans found in left
        else if(leftAns != NULL && rightAns == NULL){
            return leftAns;
        }
        // Ans found in right
        else if(leftAns == NULL && rightAns != NULL){
            return rightAns;
        }
        // LCA found
        else{
            return root;
        }


    }
};