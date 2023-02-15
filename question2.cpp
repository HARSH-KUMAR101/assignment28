/*Define a class Complex with appropriate instance variables and member functions. One
of the functions should be setData() to set the properties of the object. Make sure the
names of formal arguments are the same as names of instance variables.*/
#include<iostream>
using namespace std;
class complex
{ int a,b;
public:
     friend ostream& operator<<(ostream &os,complex x)
      { cout<<"a + ib = "<<x.a<<" + i"<<x.b;
        return cout;
      }
       void setdata()
      { cout<<"enter value of a : ";
        cin>>a;
        cout<<"enter value of b : ";
        cin>>b;
      }

};
int main()
{ complex c;
    cout<<"enter values : \n";
    c.setdata();
    cout<<c;
 return 0;
}
