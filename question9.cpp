/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
#include<iostream>
using namespace std;
class integer
{ int x;
public:
    integer(int x):x(x){}
    operator int()
    {
       return x;
    }
};
int main()
{
   integer x(5);
   int y=x;
   cout<<"y= "<<y<<endl;
 return 0;
}
