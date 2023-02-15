/*Create a complex class and overload assignment operator for that class.*/
#include<iostream>
using namespace std;
class complex
{ int x,y;
public:
    complex(){}
    complex(int a,int b)
    { x=a;
      y=b;
    }
     void operator=(complex n)
     { x=n.x;
       y=n.y;
     }
     void display()
     {
       cout<<"a + bi = "<<x<<" + "<<y<<"i"<<endl;
     }
};
int main()
{ complex a(3,2),b;
    b=a;
    b.display();
return 0;
}
