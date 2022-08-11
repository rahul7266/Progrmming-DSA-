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
vector<vector<int>> zig_zag(node *root)
{
    vector<vector<int>> ans ;
    if(!root) 
    return ans ;
    queue<node *> q ;
    q.push(root);
     bool flag=0;
    while(!q.empty())
    {
        int n=q.size() ;
       
        vector<int> t(n) ;
        for(int i = 0 ; i<n ;i++)
        {
            node *temp = q.front() ;
            q.pop();
            if(temp->left) q.push(temp->left) ;
            if(temp->right) q.push(temp->right) ;
            if(flag==0)
            {
               t[i] = temp->data ;
            }
            else
            {
                t[n-i-1] = temp->data ;
            }
        }
        flag=!flag;
        ans.push_back(t);
    }
    return ans;
}


int main(){
    node *root=input() ;
    vector<vector<int>> v=zig_zag(root) ;
    for(int i = 0 ;i<v.size() ;i++)
    {
        for(int j=0 ;j<v[i].size() ;j++)
           cout<<v[i][j]<<" " ;
        cout<<endl ;   
    }
    return 0;
}