void printnode(btnode<int> *root){
    if(root==nullptr)
    return;
    cout<<root->data<<":";
    if(root->left!=nullptr)
    cout<<" L "<<root->left->data;
    if(root->right!=nullptr)
    cout<<" R "<<root->right->data;
    cout<<endl;
    printnode(root->left);
    printnode(root->right);
}