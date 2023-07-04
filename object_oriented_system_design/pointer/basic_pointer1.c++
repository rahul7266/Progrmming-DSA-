// pointers is a variable that stores the adress of other variable

#include<bits/stdc++.h>
using namespace std ;
int main(){
    int i=4 ;
    int * p = &i ;

    float f = 12.2 ;
    float * pf = &f ;

    cout<<&i<<endl ;// it print the adress of i
    cout<<p<<endl ;// it also print the adress at p means adress of i
    cout<<*p<<endl; // it print the value at adress p means the value at i
    cout<<sizeof(p)<<endl ;// 
    i++ ;
    cout<<i<<" "<<*p<<endl ;// here both vlaue will be same bcz it represent the same memory adress

    int a = *p ;//a=i  here we store the vlaue at pointer p to different memory adress
    a++ ;
    cout<<i<<" "<<*p<<" "<<a<<endl ;
    i=23 ;
     cout<<i<<" "<<*p<<endl ;
     *p = 30 ;
      cout<<i<<" "<<*p<<endl ;

      (*p)++ ;
       cout<<i<<" "<<*p<<endl ;
}