if(root->left==NULL){
    Node* temp=root->right;
    delete root;
    return temp;
}
