#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
pair<int,int> maxmin(btnode<int>*root){
    if(root==nullptr){
        pair<int,int>p;
        p.first=INT_MIN;
        p.second=INT_MAX;
        return p;
    }
    pair<int,int>left=maxmin(root->left);
    pair<int,int>right=maxmin(root->right);
    int h=max(max(left.first,right.first),root->data);
    int d=min(min(left.second,right.second),root->data);
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
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
 btnode<int>*root=takeinput();
    cout<<endl<<maxmin(root).first<<" "<<maxmin(root).second;
    return 0;
}