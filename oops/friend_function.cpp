#include<bits/stdc++.h>
using namespace std ;
class bus{
public:
    void print() ;
};

class truck{
    public:
    int x ;
    private:
    int y ;
    protected:
    int z ;

    friend void bus::print() ;

    // friend class bus ;   it give the access to use all data of truck class to bus class but vice versa not true

};

void bus::print(){
    truck t; 
    t.x =1 ;
    t.y = 2 ;

    cout<<t.x<<" "<<t.y<<endl ;
}


int main(){

    bus b ;
    b.print() ;

    return 0 ;
}