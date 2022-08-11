#include<bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int vis[100001];
int maxNode,maxD;
void dfs(int v,int d){
    vis[v]=1;
    if(d>maxD) maxD=d,maxNode=v;
    for(int child:ar[v]){
        if(!vis[child]){
            dfs(child,++d);
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
         maxD=-1;
         dfs(1,0);
         maxD=-1;
         for(int i=0;i<=n;i++) vis[i]=0;
         dfs(maxNode,0);
         cout<<maxD;
    return 0;
}