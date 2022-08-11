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
int countnode(btnode<int> *root){
    if(root==nullptr)
    return 0;
    return 1+countnode(root->left)+countnode(root->right);
}
int main(){
    btnode<int>*root=takeinput();
    cout<<countnode(root);
    return 0;
}