#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
btnode<int> * remove_leaf(btnode<int> *root){
    if(root==nullptr)
    return root;
    if(!root->left&&!root->right)
    root=nullptr;
   root->left=remove_leaf(root->left);;
   root->right=remove_leaf(root->right);;
   return root;
}
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
btnode<int>* takeinput(){
    int data;
    cout<<"enter data";
    cin>>data;
    if(data==-1)
    return nullptr;
    btnode<int>*root=new btnode<int>(data);
    btnode<int>*l=takeinput();
    btnode<int>*r=takeinput();
    root->left=l;
    root->right=r;
    return root;
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>*root=takeinput();
   
    printnode(remove_leaf(root));
    return 0;
}