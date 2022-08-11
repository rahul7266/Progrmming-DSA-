

#include<bits/stdc++.h>
using namespace std ;

int b_search(vector<int>v,int l,int r,int ele)
{
     while(l<=r)
     {
         int  mid = l+(r-l)/2 ;
         if(v[mid] == ele)
         return mid ;
         else if(ele>v[mid])
         l=mid+1 ;
         else
         r=mid-1 ;
     }
     return -1 ;
}


int solve(vector<int>v,int ele)
{
    int l=0,r=1;
    // int binary search ele present between low and high so by inceasing high*2 we search range of  low and high till ele not found in middle of low and high
    while(ele>v[r])
    {
        l = r ;
        r =r*2 ;
    }

    return b_search(v,l,r,ele);
}

int main()
{
    int n, ele ;
    cin>>n>>ele ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    cout<<solve(v,ele) ;
}