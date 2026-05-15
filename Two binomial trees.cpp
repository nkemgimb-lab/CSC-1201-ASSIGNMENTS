Node* merge(Node* a,Node* b){
    if(a->data > b->data)
        swap(a,b);

    b->right=a->left;
    a->left=b;

    return a;
}
