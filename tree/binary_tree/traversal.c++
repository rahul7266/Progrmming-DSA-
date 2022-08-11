#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
btnode<int>* takeinput(){
    int data;
    cout<<"enter data";
    cin>>data;
    if(data==-1)
    return nullptr;
    btnode<int>*root= new btnode<int>(data);
    btnode<int>*left=takeinput();
    btnode<int>*right=takeinput();
    root->left=left;
    root->right=right;
    return root;
}
void preorder(btnode<int>*root){
    if(root==nullptr)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(btnode<int>*root){
    if(root==nullptr)
    return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(btnode<int>*root){
    if(root==nullptr)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>*root=takeinput();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}