
//time complexity   o(log2(n))

#include<bits/stdc++.h>
using namespace std ;
int binaryExpo(int base,int power)
{
   int res = 1;
   while(power)
   {
       if(power%2!=0){
           res*=base ;
           power-- ;
       }else{
           base*=base ;
           power/=2 ;
       }
   }
}
int main()
{
    int base,power;
    cin >> base >>power ;
    cout << binaryExpo(base,power) << endl;
}