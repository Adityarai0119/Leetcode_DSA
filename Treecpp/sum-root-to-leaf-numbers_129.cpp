class Solution {
	void sumnum(TreeNode* root, int num, int& total){
	if(root == NULL){
	return NULL;
}
num = num*10 + root->val;
if(root->left == NULL&& root->right == NULL){
total += NUM;
}
sumnum(root->left,num,total);
sumnum(root->right,num,total);
}
public:
    int sumNumbers(TreeNode* root) {
	if(root == NULL) return 0;
        int Total = 0;
	int num = 0;
	sumnum(root,num,Total);
	return Total;
    }
};