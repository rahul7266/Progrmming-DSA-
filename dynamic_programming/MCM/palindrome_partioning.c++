#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int i,int j){
       while(i<=j)
    {
        if(s[i]!=s[j])
        return 0;
        i++;
        j--;
    }
    return 1;
    }
    int palindrome(string s,int i,int j){
        if(i>=j)
            return 0;
        if(ispalindrome(s,i,j)==true)
            return 0;
        int mn=INT_MAX;
    for(int k=i;k<=j-1;k++){
            int temp=1+palindrome(s,i,k)+palindrome(s,k+1,j);
            mn=min(mn,temp);
        }
        return mn;
    }
    int main(){
        string s;
        cin>>s;
        cout<<palindrome(s,0,s.size()-1);
    }