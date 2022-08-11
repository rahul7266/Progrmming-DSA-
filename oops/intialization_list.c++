#include<bits/stdc++.h>
using namespace std ;
#include "Student3.c++"

int main()
{
  student s1(20,21) ;   //we have intialize our rollNumber wtih const int that is storing garbage value in it so, it is giving error
  
 cout<<s1.age<<" "<<s1.rollNumber ;
  return 0 ;
}