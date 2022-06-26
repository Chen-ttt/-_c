#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归

// 非递归
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if(root==NULL) return result;

    queue<TreeNode*> q;
    TreeNode *top = root;
    q.push(top);

    while(!q.empty()){
        int size = q.size(); // 每个新的循环代表一个level,队中元素个数=该level有多少个节点
        vector<int> level;
        for(int i=0; i<size; i++){ // 将该层的节点逐一出队并将其孩子节点入队
            top = q.front();
            q.pop(); // 从队首出队
            level.push_back(top->val);

            if(top->left!=NULL) q.push(top->left); // 先左后右,因为队列先入先出
            if(top->right!=NULL) q.push(top->right);
        }
        result.push_back(level);
    }

    return result;
}

