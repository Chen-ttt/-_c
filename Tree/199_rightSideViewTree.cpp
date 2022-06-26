#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    if(root==NULL) return result;

    TreeNode *top;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){ // 每次循环开始前,队列中都包含该层的所有节点
        int size = q.size();
        // 先右后左,因此队首为该层最后的节点,即为右边看到的点
        result.push_back(q.front()->val);
        while(size--){ // each level
            top = q.front();
            q.pop();

            if(top->right) q.push(top->right);
            if(top->left) q.push(top->left);
        }
    }
    return result;
}

// 也可以进行常规的层次遍历,再用i去读取最右边的节点
vector<int> rightSideViewII(TreeNode* root) {
    vector<int> result;
    if(root==NULL) return result;

    TreeNode *top;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){ // 每次循环开始前,队列中都包含该层的所有节点
        int size = q.size();
        for(int i=0; i<size; i++){ // each level
            top = q.front();
            q.pop();

            // 当该层的最后一个节点出队列,该节点即为右边看到的点
            if(i==(size-1)) result.push_back(top->val);

            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
        }
    }
    return result;
}

