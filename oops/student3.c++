class student{
    public:
     int age ;
     const int rollNumber ;
     int &x ;//referencr variable for age
     student (int r,int age):rollNumber(r),age(age) ,x(this->age) { //it is usin like this so that it initialize at the time of object creation

     }

};