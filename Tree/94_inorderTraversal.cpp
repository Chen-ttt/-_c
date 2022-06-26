#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
void Travel(TreeNode* p, vector<int>& result){
    if(p!=nullptr){
        result.push_back(p->val);
        Travel(p->left, result);
        Travel(p->right, result);
    }
}
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    Travel(root, result);
    return result;
}

// 非递归
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    if(root==NULL) return result;

    stack<TreeNode*> s;
    TreeNode *p = root;
    // 栈空且还有右分支没有遍历时,需要循环继续
    // p标志着当前出栈的节点是否还有右孩子,因此加上p的判空条件
    while(!s.empty() || p!=NULL){
        // 将所有左结点入栈
        while(p!=NULL){
            s.push(p);
            p = p->left;
        } // 走到当前分支尽头时,p为NULL,若之后没有右孩子出现,则下一轮循环中不再push新节点

        TreeNode *top = s.top();
        s.pop();
        result.push_back(top->val);
        if(top->right!=NULL){
            p = top->right; // 右孩子出现,将p赋值,下一轮循环中以p为起点开始遍历新的分支
        }

    }
    return result;
}

