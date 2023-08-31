#include<bits/stdc++.h>
using namespace std ;
class vehicle{
    public:

    vehicle(){
        cout<<"vehicle's default constructor"<<endl ;
    }
};

class car: virtual public vehicle{ // we use virtual keyword for removing the ambiguity through same level of class 
    public:

    car(){
        cout<<"car's default constructor"<<endl ;
    }
};

class truck:virtual public  vehicle{
    public:

    truck(){
        cout<<"truck's default constructor"<<endl ;
    }
};

class bus : public car, public truck{
    public:

    bus(){
        cout<<"bus's default constructor"<<endl ;
    }
};


int main(){

    bus b ;

    return 0 ;
}