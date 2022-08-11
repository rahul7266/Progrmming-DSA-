//max of subarray sum of size k
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{3,2,4,1,7,5,4,8,6,9,3};
    int k=3;
    int i=0,j=0,sum=0,mx=INT_MIN;
    while(j<v.size()){
        sum+=v[j];
        if(j-i+1<k)
        j++;
        else if(j-i+1==k){
            mx=max(mx,sum);
            sum-=v[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
}