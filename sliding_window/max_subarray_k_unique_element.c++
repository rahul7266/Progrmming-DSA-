//maximum size of subarray with k unique element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0,k=3;
    string s="aabacbebebe";
    unordered_map<char,int>mp;
    int mx=0;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<k)
        j++;
        else if(mp.size()==k){
           mx=max(mx,j-i+1);
           j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                i++;
            }
        }
    }
  cout<<mx;
  return 0;
}