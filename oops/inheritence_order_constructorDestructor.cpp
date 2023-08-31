#include<bits/stdc++.h>
using namespace std ;

class vehicle{
    public:
        string color ;
    protected:
        int numTyres ;
    private:
        int maxspeed ;

     public:
    vehicle(){
        cout<<"default constructor of vehicle"<<endl ;
    }

    vehicle(int x){
        cout<<"parameterized constructor of vehicle"<<endl ;
    }

    ~vehicle(){
        cout<<"default destructor of vehicle"<<endl ;
    }
} ;

class car : public vehicle{
    public:
        int numgears ;

    // car(){ // it always call default constructor of its parent and if not present any default constructor in its parent then it gives error
    //     cout<<"default constructor of car"<<endl ;
    // }

    
    // if in case there is a parameterized constructor in parent class  then we have to explicitly define that for calling that constructor

    car(int x):vehicle(x){ 
        cout<<"default constructor of car"<<endl ;
    }
    ~car(){
        cout<<"default destructor of car"<<endl ;
    }

    void print(){
        cout<<color<<endl ;
        cout<<numgears<<endl ;
        cout<<numTyres<<endl ;
    }

};

int main(){

   car c(56) ;
    return 0 ;
}