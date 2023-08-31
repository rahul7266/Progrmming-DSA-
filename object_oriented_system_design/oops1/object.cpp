#include<bits/stdc++.h>
using namespace std ;
#include "student.cpp" 

int main() {

    //static allocation
    Student s1 ;
    s1.age = 12 ;
   // s1.rollnumber = 15 ; //not accessible because it is a private member ;
    cout<<s1.age<<endl ;

    // dynamic allocation

    Student *s2 = new Student ;

    s2->age = 114 ; // it is same as (*s2).age = 114 ;
    
    cout<< (*s2).age<<endl ;

    return 0 ;
}