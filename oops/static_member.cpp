#include<bits/stdc++.h>
using namespace std ;

class Student {
    public:

    int age ;
    int rollnumber ;


//agar kisi variable ko static declare kiya jata hai to wo class ke har object ke liye same variable share hota hai koi alag se koi copy create  nahi hota hai 
// and it can be access through the class of the object
//jab hm is class ka object banayege is property ki copy nahi banegi us object ke liye

// we can access this properties like this     Student :: totalstudent   // we can not access like  this logically but compiler allow kr deta hai   s1.totalstudent
// static property ka intialization class ke bahar hota hai class ke andar nahi hota hai
static int totalstudent ;

Student(){
    totalstudent++ ;
}
    
};

int Student :: totalstudent = 0 ; // intialization of static data member
