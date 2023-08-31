#include<bits/stdc++.h>
using namespace std ;

int main(){
    int m,n ;
    cin>>m>>n ;

    // for creating 2d array with dynamic allocation
    int** p = new int*[m] ;

    for(int i=0;i<m;i++){
        p[i] = new int [n] ;

        for(int j=0;j<n;j++)
        cin>>p[i][j] ;
    }

    // for deleting 2d allocated memory

    for(int i=0;i<m;i++)
    delete [] p[i] ;

    delete [] p ;


    return  0 ;
}