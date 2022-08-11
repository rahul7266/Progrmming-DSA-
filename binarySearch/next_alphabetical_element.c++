

#include<bits/stdc++.h>
using namespace std ;
char findFloor(string v,int l,int r,char ele)
{
    char res ;
    while(l<=r)
    {
        int mid = l+(r-l)/2 ;
        if(v[mid]==ele)
        return v[mid+1] ;
        else if(v[mid]<ele)
        {
            
            l = mid+1 ;
        }
        else
        {
            res = v[mid] ;
            r=mid-1 ;
        }
    }
    return res ;
}

int main()
{
    int n ;
     char ele ;
    cin>>n>>ele;
    string v ;
    cin>>v ;
    cout<<findFloor(v,0,n-1,ele) ;
}