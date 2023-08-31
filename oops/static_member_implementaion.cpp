#include<bits/stdc++.h>
using namespace std ;
#include "static_member.cpp" 

int main(){

//     Student s1 ;
// s1.age = 10;
// s1.rollnumber = 23 ;
// s1.totalstudent =12 ;
// cout<<s1.totalstudent<<" "<< Student :: totalstudent<<endl ; // both printing the same
// Student s2 ;
// s2.totalstudent++ ; // it increment the value by 1 means s1.student + 1 because it does not make new copy of the variable when an object is created


// cout<<s2.totalstudent<<endl ;

// by making constructor we can count the nummber of object( totalstudent ) created 
Student s3,s4,s5,s6 ;

cout<<Student:: totalstudent<< endl ; // print total number of student created

    return 0 ;
}