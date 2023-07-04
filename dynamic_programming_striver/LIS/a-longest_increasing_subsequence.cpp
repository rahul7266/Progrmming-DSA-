
// many time buy and many time  time sell but after every buy we have to sell the stock means "BSBSBS" like condition

#include <bits/stdc++.h>
using namespace std;

// recursive method && memoization
int lis(vector<int> &v, int indx, int prev, vector<vector<int>> dp)
{
    if (indx == v.size())
        return 0;

    if (dp[indx][prev + 1] != -1)
        return dp[indx][prev + 1];            // here we are taking "prev+1" for handling the vlaue of prev = -1
    int len = 0 + lis(v, indx + 1, prev, dp); // notTake
    if (prev == -1 || v[prev] <= v[indx])
        len = max(len, 1 + lis(v, indx + 1, indx, dp)); // take

    return dp[indx][prev + 1] = len;
}

// tabulation method

int lis2(vector<int> &v, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0)); // initializing with zero

    for (int indx = n - 1; indx >= 0; indx--)
    {
        for (int prev = indx - 1; prev >= -1; prev--)
        {
            int len = 0 + dp[indx + 1][prev+1]; // notTake    // here prev+1 for handling prev = -1 case
            if (prev == -1 || v[prev] <= v[indx])
                len = max(len, 1 + dp[indx + 1][indx +1]); // take

                dp[indx][prev+1] = len ;
        }
    }
    return dp[0][-1+1] ;
}

//space optimization

int lis3(vector<int> &v, int n)
{
    vector<int> dp(n + 1, 0); // initializing with zero
    

    for (int indx = n - 1; indx >= 0; indx--)
    {
        vector<int> cur(n + 1, 0);
        for (int prev = indx - 1; prev >= -1; prev--)
        {
            int len = 0 + dp[prev+1]; // notTake    // here prev+1 for handling prev = -1 case
            if (prev == -1 || v[prev] <= v[indx])
                len = max(len, 1 + dp[indx +1]); // take

                cur[prev+1] = len ;
        }
        dp=cur ;
    }
    return dp[-1+1] ;
}

// second method using 1D array
int lis4(vector<int>&v, int n){
    vector<int>dp(n,1) ; // we can always say that subsequence with length 1 is always be a possible solution for increasing subsequence 

    for(int cur_indx=1;cur_indx<n;cur_indx++) {
        for(int prev=0;prev<cur_indx;prev++)
        if(v[prev]<v[cur_indx])
         dp[cur_indx] = max(dp[cur_indx],1+dp[prev]) ;  // if any of previous index has lesser value by dp[prev]  so we will calculate the max(dp[prev] till the cur_index-1)
         
    } 

    int mx = 0 ;
    for(int i=0;i<n;i++)
    mx = max(mx,dp[i]) ;
    return mx ;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    cout << lis(v, 0, -1, dp);
    cout << lis2(v, n);
    cout << lis3(v, n);
    cout << lis4(v, n);

    return 0;
}