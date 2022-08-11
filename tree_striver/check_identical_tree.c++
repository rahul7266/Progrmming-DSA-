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
    if(data==-1)
    return nullptr;
    node*root= new node(data);
    node*left=input();
    node*right=input();
    root->left=left;
    root->right=right;
    return root;
}
bool check_identical(node *root1,node*root2)
{
    if(!root1||!root2)
    return root1==root2 ;
    if(root1->data!=root2->data)
    return false;
    return check_identical(root1->left,root2->left)==check_identical(root2->right,root2->right) ;
}
int main(){
    node *root1=input() ;
    node *root2=input() ;
    cout<<check_identical(root1,root2);
     
    return 0;
}