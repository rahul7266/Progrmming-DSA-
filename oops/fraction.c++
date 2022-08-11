#include<bits/stdc++.h>
using namespace std ;
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
      void add(fraction f2)
      {
          int lcm = demo* f2.demo ;
          int x = lcm/demo ;
          int y = lcm/f2.demo ;
          int num = x*nemo+y*f2.nemo ;
          nemo=num ;
          demo = lcm ;
      }
};