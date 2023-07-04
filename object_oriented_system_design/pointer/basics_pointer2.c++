#include<bits/stdc++.h>
using namespace std ;
int main(){
    int i =10 ;

    cout<<i<<endl;
    i++ ;
    cout<<i<<endl ;
    int *p=0 ; // so always intialize pointer with some value are 0 means int * p = 0 ;
    cout<<p<<endl ;
    (*p)++ ; //here you are increasing some random value in memory 
    *p=i ;
    cout<<*p<<endl ;
    return 0 ;
}