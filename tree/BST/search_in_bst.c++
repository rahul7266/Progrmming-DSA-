#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
bst<int>* search(bst<int>*root,int n){
    if(!root||root->data==n)
      return root;
    else if(n<root->data)
     return search(root->left,n);
    else 
      return search(root->right,n);
  
}   
void printnode(bst<int> *root){
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
bst<int>* takeinput(){
    int data;
    cin>>data;
    if(data==-1)
    return nullptr;
     bst<int>*root=new bst<int>(data);
    root->left=takeinput();
    root->right=takeinput();
    return root;
}
int main(){
    bst<int>*root=takeinput();
    int n;
    cin>>n;
   if(search(root,n))
    cout<<true;
    return 0;
}