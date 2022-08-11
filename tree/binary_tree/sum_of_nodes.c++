#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
int s=0;
void sum(btnode<int>*root){
      if(root==nullptr)
      return;
      s+=root->data;
      sum(root->left);
      sum(root->right);
}
int sum2(btnode<int>*root){
    if(root==nullptr)
    return 0;
    return (sum2(root->left)+sum2(root->right)+root->data);
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
    cout<<sum2(root);
    return 0;
}