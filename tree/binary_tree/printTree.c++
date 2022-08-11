#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
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
int main(){
    btnode<int> *root=new btnode<int>(1);
    btnode<int> *node1=new btnode<int>(2);
    btnode<int> *node2=new btnode<int>(3);
    root->left=node1;
    root->right=node2;
    printnode(root);
    return 0;
}
