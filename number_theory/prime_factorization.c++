#include<bits/stdc++.h>
using namespace std ;
void pfactor(int n)
{
   int cnt ;
    for(int i=2; i*i<=n; i++)
    {
        if(n % i == 0)
        { 
            cnt = 0;
            while(n%i==0)
            {
                cnt++ ;
                n=n/i ;
            }
            cout<< i << " " <<cnt << endl ;
        }
       
    }
    if(n>1)
        cout<< n << " " <<1 << endl ;
}
int main()
{
    int n;
    cin >> n ;
     pfactor(n) ;
}