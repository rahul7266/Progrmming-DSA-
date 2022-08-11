//top k most frequency number
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{7,5,8,3,4,5,7,7,2};
     int k=3;
     unordered_map<int,int> mp;
     for(int i=0;i<v.size();i++){
         mp[v[i]]++;
     }
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;  //min heap
     for(auto i:mp){
         pq.push({i.second,i.first});
         if(pq.size()>3)
         pq.pop();
     }
     while(!pq.empty()){
     cout<<pq.top().second<<endl;
     pq.pop();
     }
    return 0;
}