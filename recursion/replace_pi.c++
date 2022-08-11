#include<bits/stdc++.h>
using namespace std;
string fun(string s)
{
    if(s.size()==0)
    return s;
    if(s[0]=='p'&&s[1]=='i'&&s.size()>=2)
    return "3.14"+fun(s.substr(2,s.size()-2));
    return s[0]+fun(s.substr(1,s.size()-1));
}

int main()
{
    string s;
    cin>>s;
    cout<<fun(s);
}