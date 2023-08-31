#include<bits/stdc++.h>
using namespace std ;

inline int max(int a,int b){    // it increases the readibility of a function 
    return (a>b)?a:b ;      // jaha pr code me max function likha hoga waha directly replace kr dega
}

int sum(int *a,int size, int si=0){  // here default varible is 'si = 0' so if we does not pass any argument during function call it automatically take a default value of si to zero 
    int s =0 ;
    for(int i=0;i<size;i++)
    s+=a[i] ;
    return s ;
}
int sum2(int a,int b,int c=0,int d=0){ // we can give any number of default value from right side 
    return a+b+c+d ;
}

int main(){
 
   int d =2,b=4 ;
   int c = max(d,b) ;

   int a[20] ;
   cout<<sum(a,20)<<endl ;
   cout<<(2,3)<<endl ;
    return 0 ;
}