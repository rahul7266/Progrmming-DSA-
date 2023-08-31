#include<bits/stdc++.h>
using namespace std ;

class dynamic_array{
   
    int *data ;
    int cur_indx ;
    int capcity ; // size

    public:

    dynamic_array(){
        data = new int[5] ;
        cur_indx = 0 ;
        capcity = 5 ;
    }
    void add(int num){
        if(cur_indx == capcity){
            int *newdata = new int[2*capcity] ;
            for(int i=0;i<cur_indx;i++)  newdata[i] = data[i] ;
            delete []data ;
            data = newdata ;
        }
        data[cur_indx] = num ;
        cur_indx++ ;
    }

    dynamic_array(dynamic_array const &d){
        // this->data = d.data ; // shallow copy

        // deep copy
         this->data = new int[d.capcity] ;
        for(int i=0;i<d.cur_indx;i++)  this->data[i] = d.data[i] ;
       

        this->cur_indx = d.cur_indx ;
        this->capcity = d.capcity ;

    }

    int get(int indx) const{
        if(indx<cur_indx) return data[indx ] ;
        return -1 ;
    }

    void print() const{
        for(int i=0;i<cur_indx;i++)
        cout<<this->data[i]<<" "<<endl ;
    }

    dynamic_array operator =(dynamic_array const &d){
          this->data = new int[d.capcity] ;
        for(int i=0;i<d.cur_indx;i++)  this->data[i] = d.data[i] ;
       

        this->cur_indx = d.cur_indx ;
        this->capcity = d.capcity ;
    }

};


int main(){

    dynamic_array d1 ;

    d1.add(12) ;
    d1.add(20) ;
    d1.add(35) ;
    d1.add(45) ;

   
    

    dynamic_array d2(d1) ;

    d2.add(17) ;
    d2.add(18) ;

    d2.add(19) ;

    d2.add(177) ;
    d1.print() ;
    d2.print() ;



    return 0 ;
}