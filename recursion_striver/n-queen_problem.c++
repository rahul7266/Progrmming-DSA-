#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> ans;
bool isValid(vector<string>&v,int r,int c){
    int i=r,j=c ;
    while(i>=0){
        if(v[i][j]=='Q')
        return false ;
        i-- ;
    }
       i=r,j=c ;
    while(j>=0&&i>=0){
         if(v[i][j]=='Q')
        return false ;
        j++ ;
        i-- ;
    }
       i=r,j=c ;
     while(j>=0&&i>=0){
         if(v[i][j]=='Q')
        return false ;
        j-- ;
        i-- ;
    }
    return true ;
}

void fun(vector<string>&v,int r,int n){
    if(r==n){
        ans.push_back(v) ;
        return ;
    }

    for(int c=0;c<n;c++){
        if(isValid(v,r,c)){
            v[r][c]='Q' ;
            fun(v,r+1,n) ;
            v[r][c]='.' ;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
   vector<string>v(n) ;
   string s(n,'.') ;
   for(int i=0;i<n;i++) v[i]=s ;
   fun(v,0,n) ;

   for(auto x:ans ){
    for(auto y:x)
    cout<<y<<endl ;
    cout<<endl ;
   }
    return 0;
}