#include<bits/stdc++.h>
using namespace std ;

// operator are defined only for predefined data types so we can make operators work for user-defined classes. This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading

//means if we taking about + operator ,then by extending its property making work with user defined classes is known as operator overloading

class fraction{
    private:
       int nemo ;
       int demo ;

    public: 
      fraction(int nemo,int demo)
      {
          this->nemo=nemo ;
          this->demo=demo ;
      }

      void print()
      {
          cout<<nemo<<" / "<<demo<<endl ;
      }
      fraction add(fraction const& f2)
      {
          int lcm = demo* f2.demo ;
          int x = lcm/demo ;
          int y = lcm/f2.demo ;
          int num = x*nemo+y*f2.nemo ;
         

          fraction result(num, lcm) ;
          return result ;
      }


      // operator overloading
      fraction operator+ (fraction const& f2) const { // we have marked it constant bcz it is not changing the property of cur object it only use the value of cur  object
        int lcm = demo* f2.demo ;
          int x = lcm/demo ;
          int y = lcm/f2.demo ;
          int num = x*nemo+y*f2.nemo ;
          fraction result(num, lcm) ;
          return result ;
      }

      // pre increment operator(++)    in this case we need not any argument to pass in the function
      // and same process will be done in case of  += like  operators
      fraction& operator ++(){ // we will returning the reference so that it can not create the copy in buffer alwayas called on the current object     (++(++f1))   and we can not make it constant bcz there is change is the value of this(means current object)
        nemo  = nemo + demo ;
        return *this ;   //here *this return the value at the adress this means the value of cur object
      }

      //post increment operator(++)
      fraction operator ++(int){
        fraction fnew(nemo, demo) ;
        nemo = nemo + demo ;
        return fnew ;
      }
};

int main(){

    fraction f1(2,3) ;
    fraction f2(3,6) ;
    fraction res = f1.add(f2) ;
    fraction res2 = f1 + f2 ;

    f1.print() ;
    f2.print() ;
    res.print() ;
    res2.print() ;

    // pre-increment
    fraction f3 = ++f1 ;
    f1.print() ;
    f3.print() ;

    ++(++f1) ;
    f1.print() ;

    fraction f4 = f2++ ;
    f2.print() ;
    f4.print() ;

    return  0 ;
}