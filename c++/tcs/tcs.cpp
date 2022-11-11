#include<bits/stdc++.h>
using namespace std;


int main()
{
    unordered_map<char,int>m1;
    unordered_set<char> st;
    string s1,s2;
    cin >> s1 >> s2;
    for(int i= 0 ; i< s1.size() ; i++)
    {
        m1[s1[i]]++;
    }
    bool flag = 0;
    for(int i = 0; i< s2.size() ; i++)
    {
        if(s1[i] == s2[i]) continue;
        else if((s1[i]!= s2[i] && (m1[s2[i]] == 0))) 
           {
              flag = 1;
              break;
           }
           else if((s1[i] > s2[i]))
             {
                flag = 1;
                break;
             }
          st.insert(s2[i]);
    }
    if(flag ==  1) cout << -1 << endl;
    else cout << st.size() << endl;
    return 0;
}