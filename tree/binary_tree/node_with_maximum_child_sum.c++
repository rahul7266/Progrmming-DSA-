#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
int maxchildsum(btnode<int>*root){
    if(root==nullptr)
    return 0;
    
    int s=root->data+root->left->data+root->right->data;
    return max(s,max(maxchildsum(root->left),maxchildsum(root->right)));
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
    cout<<maxchildsum(root);
    return 0;
}