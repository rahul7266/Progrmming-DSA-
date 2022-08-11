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
vector<int> postorder(node *root)
{
    vector<int>v;
    stack<node*>s ;
    s.push(root);
    while(!s.empty())
    {
        node *temp=s.top();  
        s.pop();
        v.push_back(temp->data);
        if(temp->left)s.push(temp->left) ;
        if(temp->right)s.push(temp->right) ;
        
        
    }
    reverse(v.begin(),v.end());
    return v;
}
int main(){
    node *root=input() ;
   vector<int>v= postorder(root) ;
   for(int i=0 ;i<v.size() ;i++)
   {
       cout<<v[i]<<" ";
   }
    return 0;
}