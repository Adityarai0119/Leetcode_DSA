class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return root;

        Node* curr = root;

        while (curr->left != NULL || curr->right != NULL) {
            Node* temp = curr;

            while (temp != NULL) {
                // Rule 1: Connect siblings
                temp->left->next = temp->right;

                // Rule 2: Connect children across parents
                if (temp->next != NULL) {
		  if(temp->next->left != NULL && temp->right != NULL){
                     temp->right->next = temp->next->left;
	          else if( temp->right != NULL && temp->next->right != NULL && ){
                  temp->right->next = temp->next->right;
}
		  else if(temp->left != NULL && temp->next->left != NULL)
			temp->left != NULL && temp->next->left != NULL
		
		 }

                }

                // Move to the next parent in this level
                temp = temp->next;
            }

            // Move to the next level
            curr = curr->left;
        }

        return root;
    }
};