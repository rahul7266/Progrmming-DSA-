#include<bits/stdc++.h>
using namespace std;
int unique(vector<int>v,int n){
    if(n==0)
    return v[0];
    return v[n]^unique(v,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<unique(v,n-1);

    return 0;
}