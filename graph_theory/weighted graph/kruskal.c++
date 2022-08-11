#include<bits/stdc++.h>
using namespace std ;
struct edge{
    int a;
    int b ;
    int w ;
};
bool comp(edge x,edge y)
{
    return x.w < y.w ;
}

edge ar[100001] ;
int par[100001] ;
int find(int a)
{
    if(par[a]==-1) return a ;
    return  par[a]=find(par[a]) ;
}
void merge(int a,int b)
{
   par[a] = b ;
}
int main()
{
    int m,n,a,b,w ;
    cin>>n>>m ;
    for( int i=0; i < n; i++)  par[i]=-1 ;
    for( int i=0 ;i<m; i++)
    {
        cin>>ar[i].a>>ar[i].b>>ar[i].w ;
    }
    sort(ar,ar+m,comp) ;
    int sum=0 ;
    for( int i=0; i<n; i++)
    {
        a = find( ar[i].a) ;
        b = find( ar[i].b) ;

        if(a!=b){
            sum+=ar[i].w ;
            merge(a,b) ;
        }
    }
    cout<<sum ;

    return 0 ;

}