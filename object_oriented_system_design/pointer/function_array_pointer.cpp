
// when we are trying to pass the array in a function it passes like a pointer
// so due to behavour of pointer we can pass the part of array in function
#include<bits/stdc++.h>
using namespace std ;

int sum(int a[], int size){   //here we are receiving the a as pointer so size of a will be 4 so we can also write like this
// int sum(int *a,int size){

    int ans =0 ;
    for(int i=0;i<size;i++)
    ans+=a[i] ;


}
int main(){
     int a[10] ; // here size will be 4*10
     cout<<sum(a,10)<<endl ;

    return  0 ;
}