#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n); for(int i=0;i<n;i++) cin>>v[i];
    vector<int>a;
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        if(s.empty())
        a.push_back(-1);
        else if(s.size()>0&&s.top()>v[i])
        a.push_back(s.top());
        else if(s.size()>0&&s.top()<=v[i])
        {
            while(s.size()>0&&s.top()<=v[i])
                  s.pop();
            if(s.size()==0)
            a.push_back(-1);
            else
            a.push_back(s.top());      
        }
        s.push(v[i]);
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}