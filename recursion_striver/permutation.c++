#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permutation(vector<int> &v, int indx){
   if(indx>=v.size()){
    ans.push_back(v) ;
    return ;
   }

   for(int i=indx;i<v.size();i++){
    swap(v[i],v[indx]) ;
    permutation(v,indx+1) ;
     swap(v[i],v[indx]) ;
   }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<bool> flag(n, false);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> temp;
    permutation(v, 0);

    for (auto x : ans)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
}