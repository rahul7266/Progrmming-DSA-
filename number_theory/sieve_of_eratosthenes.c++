// time complexity   n(log(log(n)))

#include<bits/stdc++.h>
using namespace std ;
bool ar[100000] ;
void sieve()
{
    for(int i=0 ;i<100000 ;i++) ar[i] = true ;
    for(int i=2 ;i*i<100000; i++)
    {
        if(ar[i])
        {
            for(int j=i*i;j<100000;j+=i)
            ar[j]=0 ;
        }
    }
}
int main()
{
    int n ;
    cin>>n ;
    sieve() ;
    for(int i=2;i<n;i++)
      if(ar[i])
      cout<< i <<" " ;
    
    return 0 ;
}