#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
int h(btnode<int>*root){
    if(root==nullptr)
    return 0;
    return 1+max(h(root->left),h(root->right));
}

bool balance(btnode<int>*root){
    if(root==nullptr)
    return true;
    if(abs(h(root->left)-h(root->right))>1)
    return false;
    if(!balance(root->left)||!balance(root->right))
    return false;
    return true;
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
   // sum(root);
    cout<<endl<<balance(root);
    return 0;
}