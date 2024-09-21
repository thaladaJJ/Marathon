#include <stdlib.h>

/**
 * Definition for a binary tree node.
**/ 
struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};
 
struct TreeNode* invertTree (struct TreeNode* root) {

    struct TreeNode* parent = root;

    if (parent != NULL) {

        struct TreeNode* aux = parent->left;
        parent->left = invertTree (parent->right);
        parent->right = invertTree (aux);
    }

    return parent;
}