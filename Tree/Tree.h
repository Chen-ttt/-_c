#ifndef LEETCODE_TREE_H
#define LEETCODE_TREE_H

#endif //LEETCODE_TREE_H

struct TreeNode{
    int val;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(): val(0), leftChild(nullptr), rightChild(nullptr){}
    TreeNode(int x): val(x), leftChild(nullptr), rightChild(nullptr){}
};

TreeNode* createTree(int* data){
    TreeNode root = TreeNode(data[0]);
    TreeNode *p = root;
    for (int i = 1; i < data.size(); ++i) {
        if(data[i]!=-1){
            TreeNode newNode = TreeNode(data[i]);
            p->leftChild = &newNode;

        }

    }
}
