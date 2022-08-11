#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
vector<int> fun(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> prefixXor(arr.size()+1,0),result;
        for(int i=0;i<arr.size();i++)                        
            prefixXor[i+1]=prefixXor[i]^arr[i];
        for(vector<int> &v:queries)
            result.push_back(prefixXor[v[1]+1]^prefixXor[v[0]]);  
			        return result;
    }
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,b;
		cin>>n>>b;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		v[i]=i+1;
		vector<vector<int>>q;
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		q.push_back({i,j});
		vector<int>ans=fun(v,q);
		int c=0;
		for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
		// if(ans[i]==0)
		// c++;
		// if(c==b)
		// cout<<"YES"<<endl;
		// else
		// cout<<"NO"<<endl;

	}
	return 0;
}
