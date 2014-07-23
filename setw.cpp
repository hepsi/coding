//write a program to study the manipulators like setw() and setprecision()

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double value_of_pi = 3.1415926536;
  std::cout << setfill('#');
  std::cout << setw(15) << setprecision(8) << value_of_pi << std::endl;
  std::cout << setw(12) << setprecision(4) << value_of_pi << std::endl;
return 0;
}
