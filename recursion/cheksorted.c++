#include<bits/stdc++.h>
using namespace std;
bool chek(int arr[],int n){
    if(n==1||n==0)
    return true;
    if(arr[0]>arr[1])
    return false;

    return chek(arr+1,n-1);
}
int main(){
   int arr[]={1,2,3,4,5,7};
     cout<<chek(arr,6);
    return 0;
}