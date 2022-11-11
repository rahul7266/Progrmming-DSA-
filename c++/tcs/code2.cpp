#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    for(int i=1;i<=t ; i++){
        long long r,c ;
        cin>>r>>c ;
        vector<vector<char>>v(r,vector<char>(c)) ;
        long long cnt = 0 ;
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            cin>>v[i][j] ;
            if(v[i][j]=='.')
            cnt++ ;
        }
        
        long long b = r*c ;
        if((r==1||c==1)&&(b!=cnt))
        cout<<"Case #"<<i<<": "<<"Impossible"<<endl ;
        else{
            cout<<"Case #"<<i<<": "<<"Possible"<<endl ;
            if(cnt==b)
            {
                 for(int i=0;i<r;i++){
                  for(int j=0;j<c;j++)
                  cout<<v[i][j];
                  cout<<endl ;
                 }
            }
            else{
                for(int i=0;i<r;i++){
                  for(int j=0;j<c;j++)
                  cout<<"^";
                  cout<<endl ;
                 }
            }
        }
        
    }
    return 0 ;
}