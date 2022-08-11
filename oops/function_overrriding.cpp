#include<bits/stdc++.h>
using namespace std;
class circle{
   
    public:
    void area(int a,int b)
    {
        cout<<a*b<<"\n";
    }
   

};
class child : public circle{
public:

void area(int a,int b)
{

    cout<<a+b<<"\n";
}
};
int main()
{
    circle obj;
    obj.area(3,4);
    // obj.area(3); not accessable due to private
    
   
    return 0;
}

