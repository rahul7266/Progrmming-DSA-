#include<bits/stdc++.h>
using namespace std ;
#include "student2.cpp" 

int main() {

    //static allocation
    Student s1 ;
    
    s1.rollnumber = 12 ;
    int age  = s1.getage() ;

    cout<<s1.rollnumber<<" "<<age<<endl ;

    s1.setage(25) ;

    cout<<s1.rollnumber<<" "<<s1.getage()<<endl ;


    // dynamic allocation

    Student *s2 = new Student ;

    

    return 0 ;
}