#include<bits/stdc++.h>
using namespace std ;
#include "Student.c++"

int main()
{
    student s1;
    student *s2 = new student() ;
    s1.rollnumber=1 ;
    s2->rollnumber=2 ;
    s1.setage(15) ;
    s2->setage(16) ;
    s1.display() ;
    s2->display() ;
}