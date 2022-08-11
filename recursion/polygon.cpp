#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,j,n,in) for (int i = j; i<n;i+=in)
#define loop(i,n) For(i,0,n,1)
const ll mod = 1e9 +7;


int main(){
  int t; cin>>t;
  ll ans = -1; bool ox = true ; int ani = 1e6,pp = 1e8 ; bool oy = true;
  while(t--){
    int x,y; cin>>x>>y;
    if ( ox and x==ani and y!=pp){
      ani =x;
      pp =y;
      ox = false ;
      oy = true;
      ans++;
    }
    else if ( oy and y == pp and x!=ani){
      ani = x; pp = y;
      oy = false;
      ox = true;
      ans++;
    }
    else if ( y!= pp and x!=ani) {
      ani =x; pp = y; 
      ox = true; oy = true;
      ans++;

    }
    else{
          ani =x; pp = y; 

    }
  }
  cout<<(ans+1);return 0;
}