class Solution {
	vector<int> inorder(TreeNode* root){
		vector<int> ans;
		TreeNode* curr = root;
		while(curr != NULL){
		if(curr->left == NULL){
		ans.push_back(curr->val);
		curr = curr->right;
		}


		else{
		TreeNode* prev = curr->left;
		while(prev->right != NULL && prev->right != curr){
		prev = prev->right;
		}

		if(prev->right == NULL){
		prev->right = curr;
		curr = curr->left;
		}

		else{
			prev->right = NULL;
			ans.push_back(curr->val);
			curr = curr->right;  
			}
		}	
	}
return ans;
}
void inorderans(TreeNode* root,vector<int>& ans){
		int i = 0;
		TreeNode* curr = root;
		while(curr != NULL){
		if (curr->left == NULL) {
   		curr->val = ans[i++];  
                curr = curr->right;
}
		


		else{
		TreeNode* prev = curr->left;
		while(prev->right != NULL && prev->right != curr){
		prev = prev->right;
		}

		if(prev->right == NULL){
		prev->right = curr;
		curr = curr->left;
		}

		else{
			prev->right = NULL;
			curr->val = ans[i++];
                    	curr = curr->right;  
			}
		}	
	}
}

public:
    void recoverTree(TreeNode* root) {
        vector<int> res = inorder(root);
	sort(res.begin(), res.end());
	inorderans(root,res);

    }
};