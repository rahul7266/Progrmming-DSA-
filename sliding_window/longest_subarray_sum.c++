//longest subarray of sum k
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v{2,3,1,2,4,3};
    int i=0,j=0;
    int k=7;
    int mx=0;
    int sum=0;
    while(j<v.size()){
           sum+=v[j];
        if(sum<k){
        j++;
        }
        else if(sum==k){
            mx=max(mx,(j-i+1));   //update max size window
            j++;
        }
        else if(sum>k){         //decrease the window size while s<k or s=k
            while(sum>=k){
                 mx=max(mx,(j-i+1));
                sum-=v[i];
                i++;
            }
            j++;
        }
    }
     cout<<mx;
    return 0;
}