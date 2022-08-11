#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val ;
        left=right=nullptr;
    }
    
};
node* input(){
    int data;
    cin>>data;
    if(data == -1)
    return nullptr;
    node*root = new node(data);
    node*left = input();
    node*right = input();
    root->left = left;
    root->right=right;
    return root;
}
//////////////your code is here
 bool rTOn(node *root,vector<int>v,int n)
    {
        if(!root)
           return false ;
           v.push_back(root->data);
        if(root->data==n) return true;
        if(rTOn(root->left,v,n) || rTOn(root->right,v,n)) return true;
        v.pop_back();
        return false ;
        
    }
/////////////////////////
int main(){
    node *root=input() ;
    int n;
    cin>>n;
    if(!root)
    return false;
    vector<int>v;
     cout<<rTOn(root,v,n);
    return 0;
}