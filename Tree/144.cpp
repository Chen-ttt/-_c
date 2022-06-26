#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

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

