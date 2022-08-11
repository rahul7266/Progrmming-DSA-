

#include<bits/stdc++.h>
using namespace std ;

int first_occurance(vector<int>v,int l,int r)
{
    int res ;
     while(l<=r)
     {
         int  mid = l+(r-l)/2 ;
         if(v[mid] == 1)
         {
             res=mid ;
             r=mid-1 ;
         }
         else if(1>v[mid])
         l=mid+1 ;
         else
         r=mid-1 ;
     }
     return res ;
}


int solve(vector<int>v)
{
    int l=0,r=1;
    // int binary search ele present between low and high so by inceasing high*2 we search range of  low and high till ele not found in middle of low and high
    while(1>v[r])
    {
        l = r ;
        r =r*2 ;
    }

    return first_occurance(v,l,r);
}

int main()
{
    int n ;
    cin>>n;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    cout<<solve(v) ;
}