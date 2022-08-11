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
 bool fun(node *r1 ,node* r2)
    {
        if(!r1||!r2)
            return r1==r2;
        if(r1->data!=r2->data) return false;
        return fun(r1->left,r2->right)&&fun(r1->right,r2->left) ;
    }
/////////////////////////
int main(){
    node *root=input() ;
     cout<<fun(root->left,root->right);
    return 0;
}