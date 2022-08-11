#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> arr[100001];
int vis[100001];
int main() {
    int n,m;
    cin>>n>>m;
	vector<int>vs[n+1];
    while(m--){
        int a,b;
        cin>>a>>b;
        vs[a].push_back(b);
        vs[b].push_back(a);
    }
       
	return 0;
}