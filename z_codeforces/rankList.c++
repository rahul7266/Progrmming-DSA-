#include<bits/stdc++.h>
using namespace std ;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first) return p1.second<p2.second ;

    return p1.first>p2.first ;
}
void solve(){

int n,k ;
cin>>n>>k ;
vector<pair<int,int>> v (n) ;
for(int i=0;i<n;i++)
{
    int a,b ;
    cin>>a>>b ;

    v.push_back({a,b}) ;
}

sort(v.begin(),v.end(),comp) ;
int c = v[k-1].first ;
int d = v[k-1].second ;
int cnt = 0 ;
for(auto x:v){
    if(x.first==c && x.second==d) cnt++ ;

}
cout<<cnt<<endl ;

}
int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int t;
    cin>>t ;
    while(t--)
    solve() ;
    return 0 ;
}