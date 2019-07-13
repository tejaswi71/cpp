#include <iostream>
#include <cmath>

using namespace std;

class shape {
  public :
  ~shape(){
    cout<<"Deleting the created shape !\n\n\n";
  }
};

class circle : shape {
  public :
  float r;
  void area() {
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"The area of the circle is "<<M_PI*r*r<<" square units."<<endl;
  }
};

class rectangle : shape {
  public :
  float l, b;
  void area() {
    cout<<"Enter the length and breadth of the rectangle : ";
    cin>>l>>b;
    cout<<"The area of the rectangle is : " << l*b <<" square units."<<endl;
  }
};

class triangle : shape {
  public :
  float h, b;
  void area() {
    cout<<"Enter the height and base of the triangle : ";
    cin>>h>>b;
    cout<<"The area of the triangle is : "<<0.5*h*b<<" square units."<<endl;
  }
};

int main() {
  int choice;
do{
  cout<<"Choose your shape : \n 1. Circle \n 2. Rectangle \n 3. Triangle \n Literally anything else to exit !\n";
  cin>>choice;
  switch (choice){
    case 1 : {
      circle c;
      c.area();
      break;
    }
    case 2 : {
      rectangle r;
      r.area();
      break;
    }
    case 3 : {
      triangle t;
      t.area();
      break;
    }
    default : {
      cout<<"Exiting program !"<<endl;
      return 1;
    }
  }
} while(1);
return 0;
}
