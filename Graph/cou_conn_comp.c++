#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int s;
int j=0;
void dfs(int v,vector<int>b){
        vis[v]=1;
         s+=b[v-1];
       //  cout<<s<<endl;
    for (int i = 0; i <ar[v].size() ; i++)
    {
        int child=ar[v][i];
        if(!vis[child])
        dfs(child,b);
    } 
}

int fun(int n,int m,vector<int>p,vector<vector<int>>v){
    
     for(int i=0;i<m;i++)
        int a,b;
        a=v[i][j]
        ar[a].push_back(b);
        ar[b].push_back(a);
    
   
    int mx=0;
	for (int i = 1; i <= n; i++){
        if (!vis[i]){
             s=0;
            dfs(i,b);
        mx+=s;
        }
    }
return mx;
}
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    vector<int>p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    vector<vector<int>>v(n,vector<int>(2));
     for(int i=0;i<m;i++)
     for(int j=0;j<2;j++)
     cin>>v[i][j];
     cout<<fun(n,m,p,v);
	return 0;
}