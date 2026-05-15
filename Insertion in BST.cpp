Node* insert(Node* root,int value){
    if(root==NULL){
        root=new Node{value,NULL,NULL};
        return root;
    }

    if(value < root->data)
        root->left=insert(root->left,value);
    else
        root->right=insert(root->right,value);

    return root;
}
