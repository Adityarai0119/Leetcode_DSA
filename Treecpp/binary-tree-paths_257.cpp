class Solution {
    void vecstring(TreeNode* root, vector<string>& final, string temp) {
        if (root == NULL) return;

        if (!temp.empty()) {
            temp += "->";
        }

        temp += to_string(root->val);

        if (root->left == NULL && root->right == NULL) {
            final.push_back(temp);
            return;
        }

        vecstring(root->left, final, temp);
        vecstring(root->right, final, temp);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> final;

        vecstring(root, final, "");

        return final;
    }
};