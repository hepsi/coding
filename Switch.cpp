// write a program to find the area and perimeter of the square,rectangle, circle using swithch case

#inclue <iostream>
#include <math.h>

using namespace std;

int main()
{

float area, side, width = 0;
float perimeter = 0.0;
int choice;
float pi, r, a, l, w;

while (choice != 0)
{

std::cout << "Enter the choice from the list to find the area and perimeter for the shape " << std::endl;
std::cout << " 1  square " << std::endl;
std::cout << " 2  circle " << std::endl;
std::cout << " 3  rectangle " << std::endl;
std::cout << " 0  exit  " << std::endl;

std::cin >> choice;

switch (choice)
{
case 1:
   std::cout << "Enter the side of the square : " << std::endl;
   std::cin >> side;
   a = side;
   area = a * a;
   perimeter = 4 * a;
   std::cout << "Area of the square is : " << area << std::endl;
   std::cout <<"Perimeter of the square is : " << perimeter << std::endl;
   break;
case 2:
   std::cout << "Enter the radius of the circle " << std::endl;
   std::cin >> side;
   r = side;
   pi = 3.14;
   area = pi * r * r;
   perimeter = 4 * pi * r;
   std::cout << "Area of the circle is : " << area << std::endl;
   std::cout << "Perimeter of the circle is : " << perimeter << std::endl;
   break;
case 3:
   std::cout << "Enter the length of the rectangle : " << std::endl;
   std::cin >> side;
   l = side;
   std::cout << "Enter the height of the rectangle : " << std::endl;
   std::cin >> width;
   w = width;
   area = l * w;
   perimeter = 2 * l * w;
   std::cout << "Area of the rectangle is : " << area << std::endl;
   std::cout << "Perimeter of the rectangle is : " << std::endl;
   break;
   }
}
return 0;
}
   
   
