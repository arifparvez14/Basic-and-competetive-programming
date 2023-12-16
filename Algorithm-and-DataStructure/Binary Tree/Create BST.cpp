/*
          1
        /   \
       2     3
      /  \   / \
     4    5 NULL NULL
     /   \
    NULL NULL
    
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = NULL;
    
    node = (struct Node*)malloc(sizeof(struct Node));
    
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    
    return (node);
}

int main() {
    struct Node* root = newNode(1);
    root-> left = newNode(2);
    root->right = newNode(3);
    
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    return 0;
}



