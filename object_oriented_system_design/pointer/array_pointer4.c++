//array ke case me koi alag se 8 byte allocate nahi hota hai it store the adress of a[0] directly in symbol table but in case of pointer kisi bhi variable ke liye 8 byte alag se allocate hoti hai

#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a[10] ;  //

    cout<<a<<" "<<&a[0]<<endl ;

    a[0]=5 ;
    a[1] = 10 ;
    cout<<*a<<" "<<*(a+1)<<endl ;  

    cout<<a<<"  "<<&a<<endl ; // both will be same because a ke liye koi alag se 8 byte allocate nahi ho raha hai symbol table me 
   
    int *p = a ;

    cout<<p<<"  "<<&p<<endl ;// here both will be differnt bcz p ke liye alag se 8 byte allocate ho raha hai 
    cout<<sizeof(a)<<"  "<<sizeof(p);
 // a = a+1 ; not possible to change address of array

    return 0 ;
}