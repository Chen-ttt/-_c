#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
void inOrder(TreeNode *p, vector<int>& valList){
    if(p!=NULL){
        inOrder(p->left, valList);
        valList.push_back(p->val);
        inOrder(p->right, valList);
    }
}
bool isValidBST(TreeNode* root) {
    vector<int> valList;
    inOrder(root, valList);

    for(int i=0; i<valList.size()-1; i++){
        if(valList[i]>=valList[i+1]) return false;
    }
    return true;
}

// 迭代
bool isValidBST(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode *top;
    bool flag = true; // 标记
    int temp; // 用于比较大小

    while(!s.empty() || root!=NULL){
        while(root!=NULL){ // 一直沿左分支走到null
            s.push(root);
            root = root->left;
        }

        top = s.top();
        s.pop(); // 出栈
        if(flag){
            flag = false;
            temp = top->val;
        } else {
            if(top->val<=temp) return false;
            else temp = top->val;
        }
        if(top->right!=NULL){
            root = top->right; // 下一轮循环由右孩子节点为起点
        }
    }
    return true;
}
