#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];

void dfs(int v){
        vis[v]=1;
         cout<<v<<"->";
 
    for(auto child:ar[v])
        if(!vis[child])
        dfs(child);   
}
int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
	for (int i = 1; i <= n; i++){
        if (!vis[i]){
           dfs(i);
        } 
    }
    
       
	return 0;
}