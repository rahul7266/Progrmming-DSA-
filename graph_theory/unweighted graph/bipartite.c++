#include<bits/stdc++.h>
using namespace std;
vector<int>ar[10001];
int vis[10001],col[10001];
bool bipartite(int v,int c)
{
    vis[v]=1;
    col[v]=c ;
    for(auto child:ar[v]){
        if(!vis[v]){
            if(!bipartite(child,c^1))
            return false ;
        }
        else{
            if(col[child]==col[v])
            return false ;
        }
    }
    return true ;

}
int main()
{
    int n,m ;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
     bool res,flag=0;
	for (int i = 1; i <= n; i++){
        if (!vis[i]){
           res= bipartite(i,0);
           if(res==0) 
           flag=1;
        }
    }
     if(flag==0)
    cout<<"bipartite"<<endl;
    else
    cout<<"not bipartite"<<endl;
    return 0;
}