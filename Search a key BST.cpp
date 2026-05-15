#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* search(Node* root,int key){
    if(root==NULL || root->data==key)
        return root;

    if(key < root->data)
        return search(root->left,key);

    return search(root->right,key);
}
