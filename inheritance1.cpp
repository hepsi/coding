//write a program to find the area of rectangle using inheritance and friend function

#include <iostream>

using namespace std;

class Rectangle {
   float width, heigh;
  public:
     Rectangle() {}
     Rectangle (float x, float y) : width(x), height(y) {}
     float area() {return width * height;}
     friend Rectangle duplicate (const Rectangle&);
};

Rectangle duplicate (const Rectangle& param)
{
   Rectangle res;
   res.width = param.width * 2;
   res.height = param.height * 2;
   return res;
}

int main()
{
   Rectangle foo;
   Rectangle bar (2,3);
   foo = duplicate (bar);
   cout << "Area of the Rectangle : " << foo.area() << '\n';
return 0;
}
