///Binary tree


/*
           4
        /     \
       2       7
      / \     / \
     1   3   6   9
     /    \  /    \
    NULL NULL NULL NULL
    
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

void printList(Node* node) {
    while(node) {
        cout<< node->data <<endl;
        node = node->left;
    }
}

void printBT(const std::string& prefix, const Node* node, bool isLeft) {
    if( node != nullptr ) {
        cout << prefix;
        cout << (isLeft ? "├──" : "└──" );
        cout << node->data << endl;

        printBT( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void printBT(const Node* node) {
    printBT("", node, false);
}

int main() {
    struct Node* root = newNode(4);
    root-> left = newNode(2);
    root->right = newNode(7);
    
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    
    root->right->left = newNode(6);
    root->right->right = newNode(9);
    
    printBT(root);
    return 0;
}
