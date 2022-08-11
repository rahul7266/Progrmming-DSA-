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
int tree_height(btnode<int> *root){
    if(root==nullptr)
    return 0;
    return 1+max(tree_height(root->left),tree_height(root->right));
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>*root=takeinput();
    cout<<tree_height(root);
    return 0;
}