#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
TreeNode* searchBST(TreeNode* root, int val) {
    // 当遍历到NULL节点,表示搜索失败,返回当前为NULL的root节点
    // 当遍历到val值,表示搜索成功,返回当前为val的root节点
    if (root == NULL || root->val == val) return root;
    if (root->val > val) return searchBST(root->left, val);
    if (root->val < val) return searchBST(root->right, val);
    return NULL;
}

// 迭代
TreeNode* searchBST(TreeNode* root, int val) {
    TreeNode *p = root;
    // 走到末端NULL还没找到,则退出循环,返回NULL
    while(p!=NULL){
        if(p->val == val) return p;
        else if(p->val > val) p = p->left;
        else p = p->right;
    }
    return NULL;
}

