//single source shortest path
#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int dis[10001] ;
void bfs(int v){
    queue<int>q ;
    q.push(v) ;
    while(!q.empty())
    {
        int cur=q.front() ;
        q.pop() ;
        for(auto child:ar[cur])
        { 
            if(!vis[child]){
               q.push(child) ;
               dis[child]=dis[cur]+1 ;
               vis[child]=1;
            }
        }
    }
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
    bfs(1);
	for (int i = 1; i <= n; i++){
       cout<<i<<"->"<<dis[i]<<endl;
    }
    
       
	return 0;
}