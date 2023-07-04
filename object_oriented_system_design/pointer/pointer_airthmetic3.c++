// sizeof of every pointer will  be generally same depends on compiler it not depends upon datatypes of variables
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int b=10 ;
    int *a =&b ;
    cout<<a<<endl ;
    a = a+1; // it represrnt the next address of a means add 1 * 4 bytes( bcz of intiger) to the adress of a
    cout<<a<<endl ;
    return 0 ;
}