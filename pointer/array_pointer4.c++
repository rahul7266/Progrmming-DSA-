#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a[10] ;

    cout<<a<<" "<<&a[0]<<endl ;

    a[0]=5 ;
    a[1] = 10 ;
    cout<<*a<<" "<<*(a+1)<<endl ;  

    cout<<a<<"  "<<&a<<endl ;
   
    int *p = a ;
    cout<<sizeof(a)<<"  "<<sizeof(p);
 // a = a+1 ; not possible to change address of array

    return 0 ;
}