#include<bits/stdc++.h>
using namespace std;

int mcm(vector<int>v,int i,int j){
    if(i>j)
    return 0;
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=mcm(v,i,k)+mcm(v,k+1,j)+v[i-1]*v[k]*v[j];
        mn=min(mn,temp);
    }
    return mn;
}
int main(){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   cout<<mcm(v,1,n-1);
    return 0;
}