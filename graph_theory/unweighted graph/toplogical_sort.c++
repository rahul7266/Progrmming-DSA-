#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int in[100001] ;
vector<int> kahn(int n)
{
    vector<int>ans ;
    queue<int>q ;
    for(int i=1;i<=n;i++)
    if(in[i]==0)
    q.push(i) ;

    while(!q.empty())
    {
        int cur = q.front() ;
        q.pop() ;
        ans.push_back(cur) ;
        for(auto child:ar[cur])
        {
            in[child]-- ;
            if(in[child]==0)
              q.push(child) ;
        }
    }
    return ans ;
}
int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        in[a]++ ;
    }
	
    for(int i=0; i<kahn(n).size();i++)
    cout<<kahn(n)[i]<<" " ;
       
	return 0;
}