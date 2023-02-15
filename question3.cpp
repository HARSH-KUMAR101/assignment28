/*Overload subscript operator [] that will be useful when we want to check for an index out
of bound.*/
#include<iostream>
using namespace std;
class array
{
    int a[100];
    const int size=100;
public:
    array(){};
    void setarray(int n,int index)
    {
        if(index>=size)
        {
          cout<<"array index out of bound exception"<<endl;
          exit(0);
        }
        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator[](int index)
    {
        if(index>=size)
        {
            cout<<"array index out of bound exception"<<endl;
            exit(0);
        }
        return a[index];
    }
};
int main()
{ array b;
    b.setarray(5,90);
    cout<<b[90]<<endl;
    cout<<b[101]<<endl;
return 0;
}
