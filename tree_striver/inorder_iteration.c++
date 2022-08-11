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
void in(node*root){
    if(root==nullptr)
    return;
    
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
vector<int> inorder(node *root)
{
    vector<int>v;
    if(!root)return v ;
    stack<node*>s ;
    node *temp=root;
    while(1)
    {
        if(temp)
        {
            s.push(temp);
            temp=temp->left ;
        }
        else
        {
            if(s.empty())break;
            temp=s.top();
            s.pop();
            v.push_back(temp->data);
            temp=temp->right ;
        }
        
    }
    return v;
}
int main(){
    node *root=input() ;
   vector<int>v= inorder(root) ;
   for(int i=0 ;i<v.size() ;i++)
   {
       cout<<v[i]<<" ";
   }
   in(root);
    return 0;
}