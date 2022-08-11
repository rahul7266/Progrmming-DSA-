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
vector<vector<int>> vertical_traversal(node *root)
{
    vector<vector<int>> ans;
    map<int,map<int,multiset<int>>>mp;
    queue<pair<node*,pair<int,int>>>q ;
    q.push({root,{0,0}}) ;
    while(!q.empty())
    {
        int x=q.front().second.first ;
        int y=q.front().second.second ;
        node *temp=q.front().first ;
        q.pop() ;
        mp[x][y].insert(temp->data) ;
         if(temp->left) q.push({temp->left,{x-1,y+1}}) ;
         if(temp->right) q.push({temp->right,{x+1,y+1}}) ;
    }
    for(auto a:mp)
    {
        vector<int>t;
        for(auto b:a.second)
        {
            t.insert(t.end(),b.second.begin(),b.second.end());
        }
        ans.push_back(t) ;
    }
    return ans;
}


/////////////////////////
int main(){
    node *root=input() ;
    vector<vector<int>>v=vertical_traversal(root) ;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        cout<< v[i][j] << " " ;
        cout<< endl ;
    }
    return 0;
}