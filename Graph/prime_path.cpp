#include<bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
vector<int>prime;
int vis[100001],dis[1000001];

bool isprime(int n){
    for(int i=2;i*i<n;i++)
      if(n%i==0) return false;
      return true;
}
bool isvalid(int a,int b){
    int c=0;
    while(a>0){
       if(a%10!=b%10)
       a/=10;
       b/=10;
       c++;
    }
    if(c==1)return true;
    return false;
}
void buildgraph(void){
    for(int i=1000;i<9999;i++){
        if(isprime(i))
        prime.push_back(i);
    }
    for(int i=0;i<prime.size();i++)
    for(int j=i+1;j<prime.size();j++){
         int a=prime[i];
         int b=prime[j];
         if(isvalid(a,b)){
             ar[a].push_back(b);
             ar[b].push_back(a);
         }
    }
    
}

void bfs(int v){
     queue<int>q;
    q.push(v);
    vis[v]=1;
    dis[v]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int child:ar[cur]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[cur]+1;
            }
        }
    }
}



int main(){
   int a,b,t;
   while(t--){
       cin>>a>>b;
       for(int i=1000;i<9999;i++) dis[i]=-1;
        bfs(a);
       if(dis[b]==-1){
           cout<<"impossible"<<endl;
       }else{
           cout<<dis[b]<<endl;
       }
   }
    return 0;
}