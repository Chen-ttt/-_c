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
vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode *p = root;
    s.push(p);
    vector<int> result;
    if(root==NULL) return result; // 若为[],则返回[]

    while(!s.empty()){
        TreeNode *top = s.top(); // 返回top元素
        s.pop(); // 在栈中删除top元素
        result.push_back(top->val);
        if(top->right!=nullptr) s.push(top->right); // 若有孩子则push,必须先push右孩子
        if(top->left!=nullptr) s.push(top->left);
    } // 当最后一个node出栈且该node无孩子结点需要push,则栈空,退出循环
    return result;
}

