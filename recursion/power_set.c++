#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>>res;
  void sub(vector<int>m,vector<int>v){
        if(m.size()==0){
            res.push_back(v);
            return;
        }
        vector<int>v1,v2;
        v2=v;
       v.push_back(m[0]);
        v1=v;
        m.erase(m.begin());
        sub(m,v1);
        sub(m,v2);
    }
int main(){
    int n;
    cin>>n;
    vector<int>m(n);
    for(int i=0;i<n;i++)
    cin>>m[i];
    vector<int>v;
    sub(m,v);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
        cout<<res[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}