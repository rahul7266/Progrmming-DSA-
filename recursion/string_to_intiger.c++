#include<bits/stdc++.h>
using namespace std ;

int fun( string s )
{
    if(s.size() == 1 ) return s[0]-'0';
      
       
    return  (s[0]-'0')*pow(10,s.size()-1)+fun(s.substr(1,s.size()-1));
}
int main()
{
    string s ;
    cin >> s ;
   
    cout<<fun(s) ;
}