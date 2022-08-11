#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
pair<int,int> hd(btnode<int>*root){
    if(root==nullptr){
        pair<int,int>p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int>left=hd(root->left);
    pair<int,int>right=hd(root->right);
    int h=1+max(left.first,right.first);
    int d=max((left.first+right.first),max(left.second,right.second));
    pair<int,int>p;
    p.first=h;
    p.second=d;
    return p;
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
    cout<<endl<<hd(root).first<<hd(root).second;
    return 0;
}