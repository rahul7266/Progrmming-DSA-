#include<bits/stdc++.h>
using namespace std ;
int main(){
    int i=4 ;
    int * p = &i ;

    float f = 12.2 ;
    float * pf = &f ;

    cout<<&i<<endl ;
    cout<<p<<endl ;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl ;
    i++ ;
    cout<<i<<" "<<*p<<endl ;

    int a = *p ;//a=i
    a++ ;
    cout<<i<<" "<<*p<<" "<<a<<endl ;
    i=23 ;
     cout<<i<<" "<<*p<<endl ;
     *p = 30 ;
      cout<<i<<" "<<*p<<endl ;

      (*p)++ ;
       cout<<i<<" "<<*p<<endl ;
}