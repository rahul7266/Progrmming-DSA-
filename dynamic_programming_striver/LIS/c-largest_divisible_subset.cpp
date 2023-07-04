// finding the subset in which every pair is divisble (means for a pair (a,b) in a subset it must be either a%b or b%a equal to zero)

// if we sort the array it will be same as finding the largest divisible subsequence

#include <bits/stdc++.h>
using namespace std;

vector<int> lds(vector<int>&v, int n){
  
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int>ans = lds(v, n);

    for(auto x: ans)
    cout<<x<<" " ;
   
    return 0;
}