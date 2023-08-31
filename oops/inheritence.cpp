#include<bits/stdc++.h>
using namespace std ;

class vehicle{
    public:
        string color ;
    protected:
        int numTyres ;
    private:
        int maxspeed ;
} ;

class car : public vehicle{
    public:
        int numgears ;

    void print(){
        cout<<color<<endl ;
        cout<<numgears<<endl ;
        cout<<numTyres<<endl ;
    }

};

int main(){

    vehicle v ;
    v.color = "blue" ;
    car c ;
    c.color = "black" ;
    c.numgears = 3 ;
    // c.numTyres = 4 ;  it is not accessible outside the derived class bcz it is protected property of parent class treated as protected for the child calss in this case
    c.print() ;

    return 0 ;
}