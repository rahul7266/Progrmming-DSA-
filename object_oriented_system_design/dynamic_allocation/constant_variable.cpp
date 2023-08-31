#include<bits/stdc++.h>
using namespace std ;


int main(){

    // constant int
   const int i = 10 ;// whenever we are declaring a const variable we have to intialize with some value at the time of intialization
    // whenever we make the const variable then path is constant ,storage is not be constant


    // constnat reference from a non constant int
    int j =12 ;
    const int &k = j ;
   // k++ ; we can not do like this bcz path to reaching the value 12 is constant
    j++ ; // here path is not constant

    cout<<k<<" "<<j<<endl ;


    //constant reference from a constant int
    int const j2 =12 ;
    int const&k2 = j2 ;
        // here we can not do the operation j2++ and k2++

        
    return 0 ;
}