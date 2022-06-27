#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
// 前序和后序都可以,但中序遍历会导致右边分支不反转,左边分支反转两次
TreeNode* invertTree(TreeNode* root) {
    TreeNode *p;
    if(root!=NULL){
        invertTree(root->left);
        invertTree(root->right);
        p = root->left;
        root->left = root->right;
        root->right = p;
    }
    return root;
}

// 迭代
TreeNode* invertTree(TreeNode* root) {
    if(root==NULL) return root;

    stack<TreeNode*> s;
    TreeNode *p;
    s.push(root);
    while(!s.empty()){
        TreeNode *top = s.top();
        s.pop();

        p = top->left;
        top->left = top->right;
        top->right = p;

        if(top->right!=NULL) s.push(top->right);
        if(top->left!=NULL) s.push(top->left);
    }
    return root;
}
