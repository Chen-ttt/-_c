#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

// 递归
bool compareNode(TreeNode *leftNode, TreeNode *rightNode){
    // 若左右节点有一个为NULL或两节点值不相等, 返回false
    // 均为NULL,返回true
    if(leftNode==NULL && rightNode!=NULL) return false;
    else if(rightNode==NULL && leftNode!=NULL) return false;
    else if(rightNode==NULL && leftNode==NULL) return true;
    else if(rightNode->val != leftNode->val) return false;

    // 值相等, 需要对两节点的孩子节点进行判断
    // 先判断左子树的左和右子树的右
    // 相等再判断左子树的右和右子树的左
    if(compareNode(leftNode->left, rightNode->right)) return compareNode(leftNode->right, rightNode->left);
    else return false;
}
bool isSymmetric(TreeNode* root) {
    if(root==NULL) return true;
    return compareNode(root->left, root->right);
}

// 迭代 -- 用栈实现递归
bool isSymmetric(TreeNode* root) {
    if(root==NULL) return true;

    stack<TreeNode*> s;
    TreeNode *leftNode, *rightNode;
    s.push(root->right);s.push(root->left);
    while(!s.empty()){
        // 每次从栈顶取一对左右节点(它们分别代表了左右子树)
        leftNode = s.top();
        s.pop();
        rightNode = s.top();
        s.pop();

        // 比较,只有两个节点均为NULL或值相等才算对称
        // 若都为NULL,说明该左右分支遍历结束,进入下一个循环以比较别的分支,直到栈空
        if(leftNode==NULL && rightNode!=NULL) return false;
        else if(leftNode!=NULL && rightNode==NULL) return false;
        else if(leftNode==NULL && rightNode==NULL) continue;
        else if(leftNode->val != rightNode->val) return false;

        // 若值相等,说明该对节点下面仍有子树,需要比较左子树的左和右子树的右,左子树的右和右子树的左
        // 因此以相反的顺序入栈
        else if(leftNode->val == rightNode->val){
            s.push(rightNode->left);
            s.push(leftNode->right);
            s.push(rightNode->right);
            s.push(leftNode->left);
        }
    }
    return true;
}
