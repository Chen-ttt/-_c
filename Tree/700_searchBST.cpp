#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
TreeNode* searchBST(TreeNode* root, int val) {
    if (root == NULL || root->val == val) return root;
    if (root->val > val) return searchBST(root->left, val);
    if (root->val < val) return searchBST(root->right, val);
    return NULL;
}

// 迭代
TreeNode* searchBST(TreeNode* root, int val) {
    TreeNode *p = root;
    while(p!=NULL){
        if(p->val == val) return p;
        else if(p->val > val) p = p->left;
        else p = p->right;
    }
    return NULL;
}

