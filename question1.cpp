/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class complex
{ public:
    int a,b;

     friend ostream& operator<<(ostream &os,complex x)
      { cout<<"a + ib = "<<x.a<<" + i"<<x.b;
        return cout;
      }
    friend istream& operator>>(istream &is,complex &b)
      { cout<<"enter value of a : ";
        cin>>b.a;
        cout<<"enter value of b : ";
        cin>>b.b;

       return cin;
      }
};

int main()
{ complex c;
   cout<<"enter values:\n";
   cin>>c;
   cout<<"values is: ";
   cout<<c;

return 0;
}
