#include <bits/stdc++.h>
using namespace std;

 int solve(int day,vector<vector<int>>&t,int last)
{
    if (day == 0)
      {
        int mx =0 ;
        for(int j=0;j<3;j++)
        if(j!=last)
        mx = max(mx,t[0][j]) ;

        return mx ;
      }

int mx = 0;
    for(int j=0;j<3;j++)
        if(j!=last)
              mx = max(mx,t[day][j]+solve(day-1,t,j)) ;    
    

return mx ;

}


//tabulation
int solve1(int n,vector<vector<int>>&t){
    vector<vector<int>>dp(n,vector<int>(4,0)) ;

    dp[0][0] = max(t[0][1],t[0][2]) ;
    dp[0][1] = max(t[0][0],t[0][2]) ;
    dp[0][2] = max(t[0][1],t[0][0]) ;
    dp[0][3] = max({t[0][1],t[0][2],t[0][3]}) ;

    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
            dp[day][last] = 0 ;
            for(int task=0;task<3;task++){
                if(last!=task)
                   dp[day][last] = max(dp[day][last], t[day][task]+dp[day-1][task]) ;
            }
        }
    }
     
   return dp[n-1][3] ;
}


//space optimized
int solve2(int n,vector<vector<int>>&t){
    vector<int>dp(4,0) ;

    dp[0] = max(t[0][1],t[0][2]) ;
    dp[1] = max(t[0][0],t[0][2]) ;
    dp[2] = max(t[0][1],t[0][0]) ;
    dp[3] = max({t[0][0],t[0][1],t[0][2]}) ;

    for(int day=1;day<n;day++){
        vector<int>temp(4,0) ;
        for(int last=0;last<4;last++){
            temp[last] = 0 ;
            for(int task=0;task<3;task++){
                if(last!=task)
                   temp[last] = max(temp[last], t[day][task]+dp[task]) ;
            }
        }
        dp=temp ;
    }
     
   return dp[3] ;
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<vector<int>> t(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> t[i][0] >> t[i][1] >> t[i][2];
    }
    
    // cout << solve(n-1,t,3);

    // cout<<solve1(n,t) ;

    cout<<solve2(n,t) ;
    return 0;
}