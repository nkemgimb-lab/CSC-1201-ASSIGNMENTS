Node* temp=minValue(root->right);

root->data=temp->data;

root->right=deleteNode(root->right,temp->data);
