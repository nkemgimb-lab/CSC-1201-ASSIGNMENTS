Node* maxValue(Node* root){
    while(root->right!=NULL)
        root=root->right;

    return root;
}
