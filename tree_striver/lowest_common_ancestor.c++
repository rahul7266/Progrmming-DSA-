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

node * lca(node *root)
{
    if(!root)
}
/////////////////////////
int main(){
    node *root=input() ;
    vector<int> ans=bottom_view(root) ;
    for(int i=0 ;i<ans.size() ;i++)
    cout<<ans[i]<<" " ;
    return 0;
}