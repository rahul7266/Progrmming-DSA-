#include<bits/stdc++.h>
using namespace std ;
#include "Student2.c++"
int main()
{
   
   char name[] = "abcde" ;

   student s1(24,name) ;

    s1.display() ;
   name[2] ='p' ;

   student s2(12,name) ;
   
 
   s2.display() ;

   s1.display() ;
   
   



    return 0;
}