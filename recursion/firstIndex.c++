#include<bits/stdc++.h>
using namespace std;
   int firstindex(int arr[],int x,int n){
       if(n==0)
       return -1;
       if(arr[0]==x)
       return 0;
       int ans=firstindex(arr,x,n-1);
       if(ans==-1)
       return -1;
       return 1+ans;
   }
   int lastindex(int arr[],int x,int n){
       if(n==0)
       return -1;
       if(arr[n]==x)
       return n;
       return lastindex(arr,x,n-1);
   }
int main(){
    int arr[]={1,3,2,4,5,5,6};
    cout<<firstindex(arr,5,6)<<endl;
    cout<<1+lastindex(arr,5,6)<<endl;
    return 0;
}