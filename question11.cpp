/*Create a class Marks that have one member variable marks and one member function
that will print marks. We know that we can access member functions using (.) dot operator. Now
you need to overload (->) arrow operator to access that function.*/
#include<iostream>
using namespace std;
class marks
{ int mark;
public:
    marks(int m)
    {
       mark=m;
    }
     marks *operator->()
     {
       return this;
     }
    void display()
    {
      cout<<"mark is "<<mark<<endl;
    }
};
int main()
{ marks m(5);
   m.display();
   m->display();
return 0;
}
