
// many time buy and many time  time sell but after every buy we have to sell the stock means "BSBSBS" like condition

#include<bits/stdc++.h>
using namespace std ;
int maxProfit(vector<int>&v, int indx, int buy, vector<vector<int>>dp){
    if(indx == v.size()) return 0 ;
    if(dp[indx][buy]!=-1) return dp[indx][buy] ;

    int profit=0 ;

    if(buy){ // if buy is 1 then in next step we can only sell the items in that case buy will be zero
        profit =  max(-1*v[indx]+maxProfit(v,indx+1,0,dp) , maxProfit(v,indx+1,1,dp)) ;   //   here -ve sign represent that loss because we are buying the stock
                                       //  here max( value+take[ means we are selling the stock ] + nottake[means we are not selling the stock])
    }else{ // buy = 0 means we can only sell the stock
        profit =  max(+1*v[indx]+maxProfit(v,indx+1,1,dp) , maxProfit(v,indx+1,0,dp)) ;
    }

      return dp[indx][buy] = profit ; 
}

int main(){
    int n ;
    cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    vector<vector<int>>dp(n+1,vector<int>(2,-1)) ;
    cout<<maxProfit(v,0,1,dp) ;
    return 0 ;
}