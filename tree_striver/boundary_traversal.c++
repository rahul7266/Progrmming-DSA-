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

// left boundary excluding leaf
vector<int> left_boundary(node *root,vector<int>&v)
{
    if(root==nullptr||(!root->left&&!root->right))
    return v;
    v.push_back(root->data) ;
    if(!root->left) return  left_boundary(root->right,v);
    return  left_boundary(root->left,v);
}
//leaf traverse
void leaf(node *root,vector<int>&ans)
{
    if(!root) return;
    leaf(root->left,ans) ;
    if(!root->left&&!root->right) ans.push_back(root->data);
    leaf(root->right,ans) ;
}
stack<int> right_boundary(node *root,stack<int>s)
{
    if(root==nullptr||(!root->left&&!root->right))
    return s;
    s.push(root->data) ;
    if(!root->right) return  right_boundary(root->left,s);
    return  right_boundary(root->right,s);
}



/////////////////////////
int main(){
    node *root=input() ;
    vector<int>ans=left_boundary(root,ans);
    leaf(root,ans);
    stack<int> s=right_boundary(root,s);
    while(s.size()>1)
    {
        ans.push_back(s.top());
        s.pop() ;
    }
    for(int i=0 ;i<ans.size() ;i++)
    cout<<ans[i]<<" " ;
    return 0;
}