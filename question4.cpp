/*Create a student class and overload new and delete operators as a member function of
the class.*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{ string name;
  int age;
public:
      student()
      {
        cout<<"constructor is called \n";
      }
      student(string n,int a)
      { name=n;
        age=a;
      }
      void display()
      {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
      }
      void * operator new(size_t size)
      {
        cout<<"overloading new operator with size "<<size<<endl;
        void *p=malloc(size);
        return p;
      }
      void operator delete(void * p)
      {
          cout<<"overloading delete operator"<<endl;
          free (p);
      }
};
int main()
{ student *p=new student("harsh",23);

    p->display();
    delete p;
}



