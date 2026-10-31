class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return root;

        int size = 0;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            size = q.size();
            Node* prev = NULL;

            for (int i = 0; i < size; i++) {
                Node* temp1 = q.front();
                q.pop();

                if (prev != NULL) {
                    prev->next = temp1;
                }

                prev = temp1;

                if (temp1->left) q.push(temp1->left);
                if (temp1->right) q.push(temp1->right);
            }

            prev->next = NULL;
        }

        return root;
    }
};