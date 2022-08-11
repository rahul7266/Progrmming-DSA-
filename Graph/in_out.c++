#include<bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int vis[100001];
int in[100001];
int out[100001];
int timer=1;

void dfs(int v){
    vis[v]=1;
    in[v]=timer++;
    for(int child:ar[v]){
       if(!vis[child])
           dfs(child);
    }       
    out[v]=timer++;

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
    for(int i=1;i<=n;i++)
    if(!vis[i])
      dfs(i);

      for(int i=1;i<=n;i++)
      cout<<in[i]<<" "<<out[i]<<endl;
    
    return 0;
}