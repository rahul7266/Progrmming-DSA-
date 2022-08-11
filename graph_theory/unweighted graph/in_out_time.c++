#include<bits/stdc++.h>
using namespace std;
vector<int>ar[10001] ;
int visit[10001];
int in[10001],out[10001];
int timer=1 ;
void dfs(int v)
{
    visit[v]=1 ;
    in[v] = timer++ ;
    for(auto child:ar[v])
    if(!visit[child])
    dfs(child) ;
    out[v]=timer++ ;
}
int main(){
 int m,n;
 cin>>n>>m ;
 while(m--)
 {
     int a,b ;
     cin>>a>>b ;
     ar[a].push_back(b) ;
     ar[b].push_back(a) ;
 }
 for(int i = 1;i <n ;i++)
 if(!visit[i])
  dfs(i);
  for(int i=1 ;i<=n; i++)
  cout<<in[i]<<" "<<out[i]<<endl ;
  return 0;
}