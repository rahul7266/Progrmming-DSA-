#include<bits/stdc++.h>
using namespace std ;
class teacher{
    public:
    void print(){
        cout<<"teacher"<<endl ;
    }
} ;
class student{
    public:
    void print(){
        cout<<"student"<<endl ;
    }
} ;

class TA :public teacher, public student{

};



int main(){
    TA a ;
    // a.print() ;  it gives error due to ambiguity
    a.student:: print() ;

    return 0 ;
}