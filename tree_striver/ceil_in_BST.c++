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
int ceil(node *root,int n)
{
      int mx=-1;
   
    if(n>root->val) return 
}

/////////////////////////
int main(){
    node *root=input() ;
    int n ;
    cin >> n ;
    cout<<ceil(root,n) ;
    return 0;
}