// time complexity   o(log(n))

#include<bits/stdc++.h>
using namespace std ;
int ar[100000] ;
void sieve()
{
    for(int i=1 ;i<100000 ;i++) ar[i] = -1 ;
    for(int i=2 ;i<100000; i++)
    {
        if(ar[i]==-1)
        {
            for(int j=i;j<100000;j+=i)
            if(ar[j]==-1)
            ar[j]= i ;
        }
    }
}
int main()
{
    int n ;
    cin>>n ;
    sieve() ;
   
    while(n!=1)
    {
        cout<<ar[n]<<" " ;
        n=n/ar[n] ;
    }
    
    return 0 ;
}