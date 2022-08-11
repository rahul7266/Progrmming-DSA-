#include<bits/stdc++.h>
using namespace std;
bool isCheck(int a[],int n,int k){
    if(n==0)
    return false;
    if(a[0]==k)
    return true;
    return isCheck(a+1,n-1,k);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<isCheck(a,n,k);
    return 0;
}