#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];

int dfs(int v,int coun=1){
        vis[v]=1;
       
        for(int child:ar[v])
             if(!vis[child]){
                 dfs(child);
                  coun++;
                  }
     return count;
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
    vector<int>v;
   // int count=0;
	for (int i = 0; i < n; i++){
        if (!vis[i]){
         int s= dfs(i);
          v.push_back(s);
        }
    }
    int s=0;
         for(int i=0;i<v.size();i++)
         s+=v[i];
         int res=0,r;
         for(int i=0;i<v.size()-1;i++){
             s=s-v[i];
             res+=v[i]*s;
         }
         cout<<res<<endl;

	return 0;
}