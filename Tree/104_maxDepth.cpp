#include<iostream>
#include<vector>
#include "Tree.h"
using namespace std;

/**
 * 递归
 * 1. 时间复杂度 O(n): n为树的节点数, 每个节点在递归中被遍历一次
 * 2. 空间复杂度 O(height): height为树的高度, 递归需要使用栈空间, 使用栈空间最大的时候是遍历最长分支的时候(i.e.树的高度)
 */
// 本方法是在最后一次经过节点时将该节点的长度+1,实质上是后序遍历
int maxDepth(TreeNode* root) {
    if(root!=NULL){
        // 每次返回左右分支的深度中的最大值,并加1(将当前节点的长度加进去)
        return 1+max(maxDepth(root->left), maxDepth(root->right));
    } else return 0; // 遍历到分支末端时返回长度0
}

/**
 * 迭代
 * 1. 时间复杂度 O(n): n为树的节点数, 外层while每次访问一层, 内层while每次访问该层的全部节点, 因此每个节点被访问一次
 * 2. 空间复杂度 O(n): 空间消耗取决于队列储存的元素数量, 最坏情况是所有元素均在队列中, 此时队列达到最长n
 */
int maxDepth(TreeNode* root){
    if(!root) return 0;
    queue<TreeNode*> q;
    int maxLength = 0, size = 0;
    q.push(root);
    TreeNode *top;

    // 利用层次遍历, 层数=最大深度
    while(!q.empty()){
        size = q.size(); // 该层节点数
        maxLength++;
        while(size--){
            top = q.front(); // 队首节点出队
            q.pop();
            // 队首节点的子节点入队, 若所有队内节点在出栈后均无子节点入队, 则队空, 退出外层while
            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
        }
    }
    return maxLength;
}


