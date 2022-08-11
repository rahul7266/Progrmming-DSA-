#include<bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int vis[100001];
int sub[10001];
int dfs(int v ){
    vis[v]=1;
    int x=1;
    for(int child:ar[v]){
        if(!vis[child]){
           x=x+dfs(child);
        }
    }
    sub[v]=x;
    return x;
}

int main(){
    int m,n;
    cin>>n>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    
    dfs(1);
    for(int i=1;i<=n;i++)
    cout<<i<<"->"<<sub[i]<<endl;
    
    return 0;
}