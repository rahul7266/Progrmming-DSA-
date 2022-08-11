//maximum number in each subarray of size k
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{12,-1,-7,8,-15,30,16,28};
    int i=0,j=0;
    int k=3;
    vector<int>ans;
    list<int>l;
    while(j<v.size()){
        while((l.size())>0&&(l.back()<v[j])){
         l.pop_front();
        }
        l.push_back(v[j]);

        if(j-i+1<k)
        j++;
        else if(j-i+1==k){
          ans.push_back(l.front());
          if(l.front()==v[i])
           l.pop_front();

            j++;
            i++;
        }
    }
    for(int i=0;i<ans.size();i++)
    cout<<v[i]<<" ";
}