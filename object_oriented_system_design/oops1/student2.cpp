#include<bits/stdc++.h>
using namespace std ;
class Student{
    public:
       int rollnumber ;
    
    private:
       int age ;

    public:

        void display(){
            cout<< age <<" "<< rollnumber<<endl ;
        }
        int getage(){       // we use getter for using the private member and variable  outside the class
            return age ;
        }

        void setage(int a){  // we use setter for assigning some value to the private members outside the class
            if(age<0) return ; // we can restricts the acess by applying some condition on private members ;
            age = a ;
        }

} ;