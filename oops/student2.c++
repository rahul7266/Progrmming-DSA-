class student{
    int age ;
    //char *name ;

    public:
    char *name ;
      student(int age , char *name)
      {
          this->age=age ;
          //shallow copy means copy of address of name because of pointer variable
        //   this->name=name ;

        //deep copy means copy of element of array instea of address of array
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name) ;
      }
      void display()
      {
          cout<<name<<" "<<age<<endl ;
      }

      // copy constructor
        student(student const &s)  // call by reference it just copy the refernce of student of main 
        {
          //this->name=s.name ;  // shallow copy
          this->age = s.age ;
          //deep copy
           this->name = new char[strlen(s.name)+1];
            strcpy(this->name,s.name) ;
         
        }



}; 