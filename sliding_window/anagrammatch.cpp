//count occurrance of anagram of window size k;
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="cbaebabacd",m="abc";
    unordered_map<char,int>mp;
    for(int i=0;i<m.length();i++){
        mp[m[i]]++;
    }
    int count=mp.size();
    int i=0,j=0,ans=0;
    int k=m.size();
    while(j<s.size()){
        if(mp[s[j]]){
            mp[s[j]]--;
            if(mp[s[j]]==0)
            count--;
        }
        if(j-i+1<k)
            j++;
        else if(j-i+1==k){
           if(count==0)
           ans++;
          if(mp.find(s[i])!=mp.end()){
              mp[s[i]]++;
              if(mp[s[i]]==1)
             count++;
            } 

            i++;
            j++;
        }
    }
  cout<<ans;

    return 0;
}