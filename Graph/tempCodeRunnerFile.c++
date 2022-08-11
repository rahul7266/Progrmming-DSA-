#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int s;
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
int main() {
    int n;
    cin>>n;
     vector<int>b(n);
     for(int i=0;i<n;i++)cin>>b[i];
     int m;
     cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
   
    int mx=0;
	for (int i = 1; i <= n; i++){
        if (!vis[i]){
             s=0;
            dfs(i,b);
         //   cout<<s<<endl;
          mx=max(mx,s);
        }
    }
    cout<<mx<<endl;
       
	return 0;
}