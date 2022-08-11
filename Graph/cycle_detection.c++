#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
bool dfs(int v,int parent){
    vis[v]=1;
    for(int child:ar[v]){
        if(!vis[child]){
            if(dfs(child,v))
                return true;
        }
        else if(child!=parent)
         return true;
    }
    return false;
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
bool flag=false;
for(int i=1;i<n;i++){
    bool r=dfs(i,-1);
    if(r){
        flag=true;
        break;
    }
}
if(flag==true)
cout<<"cyclic graph"<<endl;
else
cout<<"not cyclic"<<endl;

return 0;
}