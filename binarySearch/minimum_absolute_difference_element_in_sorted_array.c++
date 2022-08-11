// if ele is itself found in array then return the  element itself
//if not found then the elememt which is just left and right to it give minimum difference

//note: in binary search if key is not found in array then low and high always represent the neighbour of key
#include<bits/stdc++.h>
using namespace std ;

int b_search(vector<int>v,int l,int r,int key)
{
    int res ;
     while(l<=r)
     {
         int  mid = l+(r-l)/2 ;
         if(v[mid] == key)
         {
            return key ;
         }
         else if(key>v[mid])
         l=mid+1 ;
         else
         r=mid-1 ;
     }
     if(abs(v[l]-key)<abs(v[r]-key))
     return v[l] ;
     return v[r] ;
}



int main()
{
    int n ,key;
    cin>>n>>key;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    cout<<b_search(v,0,n-1,key) ;
}