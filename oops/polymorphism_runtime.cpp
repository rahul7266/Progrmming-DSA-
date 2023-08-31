#include<bits/stdc++.h>
using namespace std ;

class vehicle{
    public:
         virtual void print(){ // by using virtual keyword we can make it run time polymorphism
            cout<<"vehicle"<<endl ;
        }
};

class car: public vehicle{
    public:
       virtual void print(){
            cout<<"car"<<endl ;
        }
};

int main(){

    vehicle v ;
    v.print() ; // it prints vehicle

    car c ;
    c.print() ;// it print car due to method overriding 

    vehicle *v1 = new vehicle; 

    vehicle *v2 ;
    v2 = &c ;

    v1->print() ;// it print vehicle
    v2->print() ; // it  print car bcz it decided at run time by using virtual keyword



    return 0 ;
}