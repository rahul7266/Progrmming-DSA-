#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int maxd,maxnode ;
void diameter(int v,int d){
        vis[v]=1;
        if(d>maxd){
            maxd=d;
            maxnode=v ;
        }
    for(auto child:ar[v])
        if(!vis[child])
        diameter(child,d+1);   
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
	       maxd=-1;
           diameter(1,0);
           maxd=-1 ;
           for( int i=1;i<n;i++) vis[i]=0 ;
           diameter(maxnode,0);
           cout<<maxd<<endl ;
    
    
       
	return 0;
}