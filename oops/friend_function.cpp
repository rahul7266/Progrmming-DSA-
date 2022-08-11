#include<bits/stdc++.h>
using namespace std;
class Sum_Class{
    public:
     int a,b;
     //friend Sum_Class fun(Sum_Class o1,Sum_Class o2);
    
    void add(int no1,int no2)
    {
        a=no1;
        b=no2;
    
    }
    void print()
    {
        cout<<a+b<<"\n";
    }
   
};
Sum_Class fun(Sum_Class o1,Sum_Class o2)
{
    Sum_Class o3;
    o3.add((o1.a+o2.a),(o1.b+o2.b));
    return o3; 
}
int main()
{
    Sum_Class obj1,obj2;
    obj1.add(2,5);
    
     obj2.add(3,5);
    
    Sum_Class obj3=fun(obj1,obj2);
    obj3.print();
    return 0;
}