#include<bits/stdc++.h>
using namespace std ;

class Student{
    public:          //agar hame class ke bahar use karna hai

    int rollnumber ;

    private:
     int age ;
    public :
     //default constructor
     Student(){
         cout<<"default constructor"<<endl;
     }

     //paramerterized constructor

     Student(int r)
     {
         cout<<"constructor two selected"<<endl;
         rollnumber = r;
     }

     Student(int a,int r)
     {
         cout<<this<<endl;   //here this is pointer that contain the address of current object
        //  age=a ;
        //  rollnumber=r ;
         this->age=a ;
         this->rollnumber=r ;
     }






    void display()
    {
        cout<<age<<" "<<rollnumber <<endl;
    }
    int getage()
    {
        return age ;
    }
    void setage( int a)
    {
        if(a<0) return ;
        age = a ;
    }
} ;