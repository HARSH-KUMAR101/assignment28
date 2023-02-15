/*Create an Integer class and overload not operator for that class.*/
#include<iostream>
using namespace std;
class integer
{ int x,y,z;
public:
    void accept()
    { cout<<"enter first number: ";
      cin>>x;
      cout<<"enter second number: ";
      cin>>y;
      cout<<"enter third number: ";
      cin>>z;
    }
    void display()
    {
      cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    void operator!()
    { x=-x;
      y=-y;
      z=-z;
    }
};
int main()
{ integer num;
    cout<<"enter three numbers::::"<<endl;
    num.accept();
    cout<<"\ngiven numbers are...";
    num.display();
    !num;
    cout<<"\nnegative numbers are...";
    num.display();
 return 0;
}
