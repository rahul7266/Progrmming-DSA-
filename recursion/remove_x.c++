#include<bits/stdc++.h>
using namespace std ;
string remove( string s )
{
    if(s.size()==0) return s ;
    if(s[0]=='x')
      return remove(s.substr(1,s.size()-1)) ;
      return s[0]+remove(s.substr(1,s.size()-1)) ;
}
int main()
{
    string s ;
    cin >> s ;
    cout << remove(s) ;
}