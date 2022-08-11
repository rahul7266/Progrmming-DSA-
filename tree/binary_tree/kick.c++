#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n;
    cin>>n;
    int s=0,p=n,x=0;
    while(p){
        s=s+(n%10);
        p=p/10;
        x++;
    }
    int i;
    for(i=0;i<=9;i++){
        if((s+i)%9==0){
          break;  
        }
    }
    cout<<i;
    int mn=INT_MAX;
    int b=n,r;
    while(x){
        int m=pow(10,x);
        r=((b/m)*10+i)*m+(b%m);
        mn=min(mn,r);
        x--;
    }
    cout<<mn<<endl;
    return ;
}

int main(){
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;

    int i = 1,t ;
    cin >> t ;

    while(t--){
        cout << "case #" << i << ": " ;
        solve() ;
        ++i ;
    }
}