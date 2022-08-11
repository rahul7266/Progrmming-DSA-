#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    fun(n-1);
    cout<<n<<" ";
}
int main(){

    fun(5);
    return 0;
}