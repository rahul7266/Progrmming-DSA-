#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char str[] ="abcdee" ;
   // char *pstr = "abcde" ; -> not always true ;
    int a[] ={1,2,3} ;
    char b[] = "abc";
    cout<<a<<endl ; // it print address of a
    cout<<b<<endl ; // it's print abc

    char *p = b ;// char * p = &b[0] ;
    cout<<p<<endl ;

    char c1 = 'a' ;
    char *pc = &c1 ;

    cout<<c1<<endl ;
    cout<<pc<<endl ;
}