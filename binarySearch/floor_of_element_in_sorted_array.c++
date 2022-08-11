
//here floor means greatest of all smaller or equal element of give ele 
#include<bits/stdc++.h>
using namespace std ;
int findFloor(vector<int>v,int l,int r,int ele)
{
    int res ;
    while(l<=r)
    {
        int mid = l+(r-l)/2 ;
        if(v[mid]==ele)
        return ele ;
        else if(v[mid]<ele)
        {
            res = v[mid] ;
            l = mid+1 ;
        }
        else
        r=mid-1 ;
    }
    return res ;
}

int main()
{
    int n, ele ;
    cin>>n>>ele ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    cout<<findFloor(v,0,n-1,ele) ;
}