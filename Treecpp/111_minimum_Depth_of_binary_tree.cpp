class Solution {
    void depth(TreeNode* root, int count, int& ans) {
        if (root == NULL) {
            return;
        }

        count++;

        if (root->left == NULL && root->right == NULL) {
            ans = min(ans, count);
            return;
        }

        depth(root->left, count, ans);
        depth(root->right, count, ans);
    }

public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;

        int count = 0;
        int ans = INT_MAX;

        depth(root, count, ans);

        return ans;
    }
};