class Solution {
    void leftleave(TreeNode* root, int& total) {
        if (root == NULL) return;

        if (root->left != NULL &&
            root->left->left == NULL &&
            root->left->right == NULL) {
            total += root->left->val;
        }

        leftleave(root->left, total);
        leftleave(root->right, total);
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        int total = 0;
        leftleave(root, total);
        return total;
    }
};