#include<bits/stdc++.h>
using namespace std ;

void increment(int& n){ // pass by reference means shared same memory location
    n++ ;
}

// bad practice
// bcz kisi bhi variable ka scope block ke andar hota hai so function execute hone ke bad delete ho jata hai to koi matalab nahi phir se wahi memory location acess krne ka
int& f1(int n){
    int a = n ;
    return a ;
}

int* f2(int n){
    int a = n ;
    return &a ;
}

/////////////////
int main(){
    int i = 10 ;
    int& j = i ;  // when we use & with j it pointing to the same memory location as i intially has , j does not store at new memory location it just referencing to the memory location of i in symbol table

    // then if we change the value of i then the value of j automatically will change bcz i and j pointing to the same memory location
    // int &j
    // j = i  we can break it in the two steps
    // bcz hmm referencing variable bna rahe hai to hme memory location variable bante samay hi batana padega

    i++ ;
    cout<<j<<endl ;
    j++ ;
    cout<<i<<endl ;

    int k=100 ;
    j = k ;
    cout<<i<<" "<<j<<endl ; // same memory location


    increment(i) ;

    cout<<i<<endl ;


    int & k1 = f1(4) ;

    int *p = f2(4) ;

    cout<<k1<<" "<<*p<<endl ;
    return 0 ;
}