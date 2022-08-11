#include<bits/stdc++.h>
#define inf 1000000000 
using namespace std ;
vector<pair<int,int>>ar[100001];

int main()
{
    int m,n ;
    cin >> n >> m ;
    while(m--)
    {
        int a,b,w ;
        cin>>a>>b>>w ;
        ar[a].push_back({b,w}) ;
        ar[b].push_back({a,w}) ;
    }
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int>dis(n+1,inf) ;
    pq.push({0,1}) ;
    dis[1] = 0 ;

    while(!pq.empty())
    {
        int cur = pq.top().second ;
        int cur_d = pq.top().first ;
        pq.pop() ;
        for(auto edge:ar[cur])
        {
            if(cur_d+edge.second < dis[edge.first])
            {
                dis[edge.first] = cur_d + edge.second ;
                pq.push({dis[edge.first], edge.first}) ;
            }
        }
    }

    for( int i=1; i<=n; i++)
    cout<<dis[i]<<" " ;



    return 0;
}