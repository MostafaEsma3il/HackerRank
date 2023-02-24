    int height(Node* root) {
        // Write your code here.
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }
