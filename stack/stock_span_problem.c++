#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v; for(int i=0;i<n;i++)cin>>v[i];
    vector<int>a;
    stack<pair<int,int>>s;
    for(int i=0;i<n;i++){
        if(s.empty())
        a.push_back(-1);
        else if(s.size()>0&&s.top().first>v[i])
        a.push_back(s.top().second);
        else if(s.size()>0&&s.top().first<=v[i])
        {
            while(s.size()>0&&s.top().first<=v[i])
                  s.pop();
            if(s.size()==0)
            a.push_back(-1);
            else
            a.push_back(s.top().second);      
        }
        s.push({v[i],i});
    }
    for(int i=0;i<n;i++)
    a[i]=i-a[i];
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}