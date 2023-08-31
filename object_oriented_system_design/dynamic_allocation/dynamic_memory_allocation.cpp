// stack memory allocation

//-- decided at compile time
//--static memory allocation
//-- automatically release on the basis of scope means agar kisi block ke andar koin variable hai to block execute hone ke bad wo automaticaly delete ho jata hai



//heap memory allocation

//-- decided at run time
//-- dynamic memory allocation
//-- manually release is required means kisi block ke andar agar koi memory allocated (dynamically) hai to execution ke bad use manually release krna padega

// 'new' keyword is used for dynamic memory allocation

// jab bhi 'new' likhte hai wo kisi naye memory ka adresss la ke deta hai aur generally is adress ko store karne ke liye pointer ka use karte hai
// 'delete' keyword is used for deallocating the memory
// 'delete' ke bad dynamically allocated memory ka adress likhte hai


#include<bits/stdc++.h>
using namespace std ;

int main(){
    int *p = new int ;
    *p = 4 ;
      
    cout<<*p<<endl ;
    delete p ; // single element deletion

    int a[100] ;// here is static allocation and size is fixed ;

    int *pa = new int[50] ; // here we are taking the 50 size memory in heap whose starting adress of the array is stored in a pointer *pa that pointer has already taken a memory allocation in stack

    pa[0] = 0 ;

    cout<<pa[0]<<endl;

    delete []pa ;// whole array deletion

    int n ;
    cin>>n ; // decided at runtime
    int *pa2 = new int[n] ;
    delete pa2 ; 

    // delete keyword kewal dynamically allocated memory ka adress delete krta hai na ki pa2 ke adress ko. pa2 pointer jo statically allocate hota hai so automatically delete ho jata hai block ke execution hone ke bad


    return 0 ;
}