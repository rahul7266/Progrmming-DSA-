#include<bits/stdc++.h>
using namespace std;
class circle{
    protected:
    int a,b,c;
    public:
    void area(int a,int b)
    {
        cout<<a*b<<"\n";
    }
    private:
    void area(int a)
    {
        cout<<a*a<<"\n";
    }

};
class child : public circle{
public:

void fun()
{
a=3;    
b=5;
c=6;
    cout<<a*b*c<<"\n";
}
};
int main()
{
    circle obj;
    obj.area(3,4);
    // obj.area(3); not accessable due to private
    child obj1;
    obj1.fun();
    return 0;
}

