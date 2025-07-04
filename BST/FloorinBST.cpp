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
    int floor =-1;
    while(root!= NULL){
    
    if(root -> data == X){
        floor = root -> data;
        return floor;
    }
    
    if(X<root->data){
        
        root = root -> left;
    }else{
        floor = root->data;
        root = root ->right;
    }
    }
    return floor;
};