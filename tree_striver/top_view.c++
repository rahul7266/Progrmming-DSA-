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
vector<int> top_view(node *root)
{
    vector<int> ans ;
    map<int,int>mp;
    queue<pair<node*, int>> q ;
    q.push({root,0});
    while(!q.empty())
    {
        node *temp=q.front().first ;
        int x=q.front().second ;
        q.pop();
        if(!mp[x])
        mp[x]=temp->data ;
        if(temp->left) q.push({temp->left,x-1}) ;
        if(temp->right) q.push({temp->right,x+1}) ;
    }
    for(auto a:mp)
    ans.push_back(a.second);
   return ans;
}



/////////////////////////
int main(){
    node *root=input() ;
    vector<int> ans=top_view(root) ;
    for(int i=0 ;i<ans.size() ;i++)
    cout<<ans[i]<<" " ;
    return 0;
}