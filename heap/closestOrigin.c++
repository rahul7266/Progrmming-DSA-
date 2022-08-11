//closest point to origin
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v{{1,1},{0,5},{-1,3},{1,2},{3,-2}};
     int k=3;
     priority_queue<pair<int,pair<int,int>>>pq;
     for(int i=0;i<v.size();i++){
         pq.push({((v[i][0]*v[i][0])+v[i][1]*(v[i][0])),{v[i][0],v[i][1]}});
         if(pq.size()>k)
         pq.pop();
     }
     while(!pq.empty()){
     cout<<pq.top().second.first<<" "<<pq.top().second.second<<endl;
     pq.pop();
     }
    return 0;
}