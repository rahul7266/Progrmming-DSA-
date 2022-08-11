#include<bits/stdc++.h>
#include "tree.c++"
using namespace std; 
btnode<int>* mirror(btnode<int>*root){
    if(root==nullptr)
    return root ;
    btnode<int>*left=mirror(root->left);
    btnode<int>*right=mirror(root->right);

    root->left=right;
    root->right=left;

    return root;
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
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>*root=takeinput();
    print_level_order(mirror(root));
    return 0;
}