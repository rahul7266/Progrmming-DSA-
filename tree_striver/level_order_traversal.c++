#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
         data=val;
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
vector<vector<int>>level_order_traversal( node*root)
{
    vector<vector<int>>v;
    if(root==nullptr)
    return v ;
     queue<node*>q ;
     q.push(root);
     
     while(!q.empty())
     {
         int s=q.size() ;
         vector<int>t ;
         for(int i=0 ;i<s ;i++)
         {
             node *f=q.front() ;
             q.pop() ;
             if(f->left) q.push(f->left) ;
             if(f->right) q.push(f->right) ;
             t.push_back(f->data) ;
         }
        v.push_back(t);
     }
     return v ;
}
int main(){
   node*root=input() ;
   vector<vector<int>>a=level_order_traversal(root) ;
   for(int i=0;i<a.size() ;i++)
   {
       for(int j=0 ;j<a[i].size() ;j++)
          cout<<a[i][j]<<" " ;
    cout<<endl ;
   }
}