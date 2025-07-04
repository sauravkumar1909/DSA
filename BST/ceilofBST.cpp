#include <iostream>
#include <vector>
#include <climits> 
using namespace std;
 
 
 struct Node {
    int data;
    struct Node* left;
    struct Node* right;
 };

int findCeil(Node* root, int X) {
    int ceil =-1;
    while(root!= NULL){
    
    if(root -> data == X){
        ceil = root -> data;
        return ceil;
    }
    
    if(X<root->data){
        ceil = root->data;
        root = root -> left;
    }else{
        root = root ->right;
    }
    }
    return ceil;
};