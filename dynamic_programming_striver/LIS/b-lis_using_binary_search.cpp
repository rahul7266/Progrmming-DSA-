
#include <bits/stdc++.h>
using namespace std;

vector<int> lis(vector<int>&v, int n){
    vector<int>ans ;
    ans.push_back(v[0]) ;
    for(int i=1;i<n;i++){
        if(v[i]>ans.back())
        ans.push_back(v[i]) ;
        else{
             int indx = lower_bound(ans.begin(),ans.end(),v[i])- v.begin() ; // for placing the v[i] at its right position
              ans[indx] = v[i] ;
        }  
    }
    return ans ;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int>ans = lis(v, n);

    for(auto x: ans)
    cout<<x<<" " ;
   
    return 0;
}