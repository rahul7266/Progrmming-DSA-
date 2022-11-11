#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++)
    cin>>v[i] ;
    
    int i=-1 ;
    for(int j=0;j<n;j++)
    if(v[j]!=0){
        i++ ;
        swap(v[i],v[j]) ;
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
	return 0;
}
