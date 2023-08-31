// little endian : last wali byte sabse pahli rakhi gayi hai (mostly happens)
//big endian: reverse of little endian

#include<bits/stdc++.h>

using namespace std ;
int main(){
    int i =65 ;
    char c =i ; // implict typecasting (system does itself)
    cout<< c <<endl ;
    int *p = &i ;
    char *pc = (char*)p ; // explicit typecasting

    cout<<*p<<endl ;
    cout<<*pc<<endl ; // intiger ki least signigicant byte sabse pahle rakhi gayi hai
    cout<<*(pc+1)<<endl ;
    cout<<*(pc+2)<<endl ;
    cout<<*(pc+3)<<endl ;


   


    return 0 ;
}