/*Create a Coordinate class for 3 variables x,y and z and overload comma operator such
that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class cord
{ int x,y,z;
public:
    cord(){x=y=z=0;}
    cord(int x,int y,int z)
    { this->x=x;
      this->y=y;
      this->z=z;
    }
    void display()
    {
       cout<<"x= "<<x<<endl;
       cout<<"y= "<<y<<endl;
       cout<<"z= "<<z<<endl;
    }
    cord operator,(cord a)
    { cord temp;
        temp.x=a.x;
        temp.y=a.y;
        temp.z=a.z;
     return temp;
    }
};
int main()
{ cord c1(1,2,3);
  cord c2(4,5,6);
  cord c3;
     c3=(c1,c2);
     c3.display();
return 0;
}





