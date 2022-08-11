#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{7,5,8,3,4,5,2};
     int k=3;
     priority_queue<int,vector<int>,greater<int>>pq;  //min heap
     for(int i=0;i<v.size();i++){
         pq.push(v[i]);
         if(pq.size()>3)
         pq.pop();
     }
     while(!pq.empty()){
     cout<<pq.top()<<endl;
     pq.pop();
     }
    return 0;
}