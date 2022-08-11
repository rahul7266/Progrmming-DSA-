#include<bits/stdc++.h>
using namespace std ;
#include "Student2.c++"
int main()
{
   
   char name[] = "abcde" ;

   student s1(24,name) ;

   s1.display() ;


   student s2(s1) ;
   s2.name[0]= 'x';

 
   s2.display() ; // xbcde

   s1.display() ; // xbcde
   
   // means  inbuilt copy constructor works like shallow copy



    return 0;
}