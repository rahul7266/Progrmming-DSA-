#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];

bool dfs(int v){
        vis[v]=1;
        for(int child:ar[v]){
            if(!vis[child]){
                if(dfs(child)==true)
                return true;
            }
            else if(vis[child]==1)
            return true;
        }
        vis[v]=2;
        return false;
}
int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
    }
     cout<<" condition: "<<dfs(1);
    
       
	return 0;
}