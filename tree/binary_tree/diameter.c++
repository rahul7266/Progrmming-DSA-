#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
int height(btnode<int>* root){
    if(root==nullptr)
    return 0;
    return 1+max(height(root->left),height(root->right));
}
int diameter(btnode<int>*root){
    if(root==nullptr)
    return 0;
    return max((height(root->left)+height(root->right)),max(diameter(root->left),diameter(root->right)));
}

void print_level_order(btnode<int> *root){
    queue<btnode<int> *>q;
    q.push(root);
    while(!q.empty()){
        btnode<int>*p=q.front();
        q.pop();
        cout<<p->data;
        if(p->left!=nullptr)
        q.push(p->left); 
        if(p->right!=nullptr)
        q.push(p->right);
    }

}
btnode<int>* takeinput(){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    if(data==-1)
    return nullptr;
    btnode<int>*root=new btnode<int>(data);
    btnode<int>*leftnode=takeinput();
    btnode<int>*rightnode=takeinput();
    root->left=leftnode;
    root->right=rightnode;
    return root;
    
}
int main(){
 btnode<int>*root=takeinput();
    cout<<endl<<diameter(root);
    return 0;
}