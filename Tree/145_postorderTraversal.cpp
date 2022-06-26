#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
void Travel(TreeNode* p, vector<int>& result){
    if(p!=nullptr){
        Travel(p->left, result);
        Travel(p->right, result);
        result.push_back(p->val);
    }
}
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    Travel(root, result);
    return result;
}

// 非递归
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    if(root==NULL) return result;

    // 以中左右的方式遍历得到逆后序,再反转即可得到后序
    stack<TreeNode*> stackForTravel;
    stack<int> stackForSave; // 储存逆后序结果,用于反转
    TreeNode *p = root;
    stackForTravel.push(p);

    while(!stackForTravel.empty()){
        TreeNode *top = stackForTravel.top();
        stackForTravel.pop();
        stackForSave.push(top->val);
        if(top->left!=nullptr) stackForTravel.push(top->left); // 先左后右
        if(top->right!=nullptr) stackForTravel.push(top->right);
    }

    while(!stackForSave.empty()){ // 反转结果,也可以直接在result中存入逆后序,再调用reverse
        result.push_back(stackForSave.top());
        stackForSave.pop();
    }
    //reverse(result.begin(),result.end());

    return result;
}

