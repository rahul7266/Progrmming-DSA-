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
 node* input()
{
    int data ;
    cin>>data ;
    if(data==-1)
    return nullptr ;
     node*root=new node(data) ;
    root->left=input() ;
    root->right=input() ;
    return root ;
}
int maxPathSum(node *root,int mx)
{
    if(!root)
    return 0;
    int leftsum=maxPathSum(root->left,mx);
    int rightsum=maxPathSum(root->right,mx);
    mx=max(mx,root->data+leftsum+rightsum);
    return root->data+max(leftsum,rightsum);
}
int main(){
    node *root=input() ;
     cout<<maxPathSum(root,INT_MIN);
    return 0;
}