//k closest number to x
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{7,5,8,3,4,5,2};
     int k=3;
     int x=5;
     priority_queue<pair<int,int>>pq;
     for(int i=0;i<v.size();i++){
         pq.push({abs(v[i]-x),v[i]});
         if(pq.size()>3)
         pq.pop();
     }
     while(!pq.empty()){
     cout<<pq.top().second<<" ";
     pq.pop();
     }
    return 0;
}