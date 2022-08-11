#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>m{12,-1,-7,8,-15,30,16,28};
    int k=3;
vector<int>v;
list<int>l;
int i=0,j=0;
while(j<m.size()){
    if(m[j]<0)
    l.push_back(m[j]);
    if(j-i+1<k)
        j++;
    else if(j-i+1==k){
        if(l.size()==0)
        v.push_back(0);
        else{
            v.push_back(l.front());
            if(m[i]==l.front())
            l.pop_front();
        }
        i++;
        j++;
    }
   
}
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}