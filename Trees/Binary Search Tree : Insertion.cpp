#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        Node* n = new Node(data);
        
        if (root == NULL)
            return n;
        Node* p = root;
        while (true) {
            if (data >= p->data) {
                if (p->right == NULL) {
                    p->right = n;
                    break;
                }
                else {
                    p = p->right;
                }
            } else {
                if (p->left == NULL) {
                    p->left = n;
                    break;
                }
                else {
                    p = p->left;
                }
            }
        }

        return root;
    }

};
