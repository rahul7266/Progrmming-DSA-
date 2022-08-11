#include <bits./stdc++.h>
#include<vector>
using namespace std;

int solve(vector<int> &r,vector<int> &h, int n){
    int mod = 1e9+7;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        v[i][0] = r[i];
        v[i][1] = h[i];
    }
    sort(v.begin(),v.end());
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        dp[i] = v[i][1];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[j][1] < v[i][1]){
                if(v[j][0] < v[i][0])
                    dp[i] = max(dp[i],(v[i][1]+dp[j])%mod);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}


int main() {
    int n;
    cin>>n;
    vector<int> r(n);
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    cout<<solve(r,h,n)<<endl;;

    return 0;
}