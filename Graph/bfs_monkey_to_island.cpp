#include<bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int vis[100001],dis[100001];


void bfs(int v){
    queue<int>q;
    q.push(v);
    vis[v]=1;
    dis[v]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int child:ar[cur]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[cur]+1;
            }
        }
    }
}

int main(){
int m,n;
cin>>n>>m;
     while(m--){
     int a,b;
     cin>>a>>b;
     ar[a].push_back(b);
     ar[b].push_back(a);
   }

    bfs(1);
    cout<<dis[n]<<endl;

    return 0;
}