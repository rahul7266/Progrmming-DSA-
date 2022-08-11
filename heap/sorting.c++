//sort a k sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{6,5,3,2,8,10,9};
    vector<int> vn;
     int k=3;
     priority_queue<int,vector<int>,greater<int>>pq;  //min heap
     for(int i=0;i<v.size();i++){
         pq.push(v[i]);
         if(pq.size()>3){
             vn.push_back(pq.top());
            pq.pop();
           }
         }
        
     while(!pq.empty()){
       vn.push_back(pq.top());
     pq.pop();
     }
     for(int i=0;i<vn.size();i++)
     cout<<vn[i]<<" ";
    return 0;
}