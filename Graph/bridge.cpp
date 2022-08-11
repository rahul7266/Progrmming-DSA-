#include<bits/stdc++.h>
using namespace std;
vector<int>ar[10001];
int vis[10001],in[10001],low[100001],timer=0;
void dfs(int v,int par){
    vis[v]=1;
    in[v]=low[v]=timer;
    timer++;
    for(int child:ar[v]){
        if(child==par)continue;
        if(vis[child]){
            //back edges
           low[v]=min(low[v],in[child]);
        }
        else{
            dfs(child,v);
            if(low[child]>in[v])
            cout<<v<<"->"<<child<<" is a bridge"<<endl;
            low[v]=min(low[v],low[child]);
        }
    }
}

int main(){
    int m,n,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    dfs(1,-1);

    return 0;
}