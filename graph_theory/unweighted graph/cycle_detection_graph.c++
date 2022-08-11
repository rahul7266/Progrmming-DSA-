#include<bits/stdc++.h>
using namespace std ;
vector<int>ar[10001] ;
int vis[10001];
bool cycle(int v,int par)
{
    vis[v]=1 ;
    for(int child:ar[v])
    {
        if(!vis[child])
        {
            if(cycle(child,v))
            return true ;
           
        }
        else{
            if(par!=child)
            return true;
        }
    }
    return false ;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b ;
        ar[a].push_back(b) ;
        ar[b].push_back(a) ;
    }
    bool flag=false;
for(int i=1;i<n;i++){
    if(!vis[i])
   {
        bool r=cycle(i,-1);
    if(r){
        flag=true;
        break;
    }
   }
}
if(flag==true)
cout<<"cyclic graph"<<endl;
else
cout<<"not cyclic"<<endl;

return 0;
}