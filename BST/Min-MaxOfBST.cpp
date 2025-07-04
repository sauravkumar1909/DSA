#include <iostream>
#include <vector>
#include <climits> 
using namespace std;


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(root == NULL)
        return 0;
        
        if(root->left == NULL)
        return root -> data;
        
        return minValue(root->left);
    }
};

//Main function not written 