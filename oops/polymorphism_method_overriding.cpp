#include<bits/stdc++.h>
using namespace std ;

class vehicle{
    public:
        void print(){
            cout<<"vehicle"<<endl ;
        }
};

class car: public vehicle{
    public:
        void print(){
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
    v2->print() ; // it also print vehicle bcz it decided at compile time 



    return 0 ;
}