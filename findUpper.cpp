// get two numbers and find the higher value and set the value higher and find the sum

#include <iostream>

using namespace std;

int main()
{
int sum, lower,higher = 0, v1, v2;

std::cout << "Enter the boundary values " << std::endl;

std::cin >> v1 >> v2;

if(v1 > v2)
{
  higher = v1;
  lower = v2;
}
else
{
  higher = v2;
  lower = v1;

}

for (int i = lower; i <= higher; i++)
{
  sum += i;
}
std::cout << "Sum of the values between " << lower << "and " << higher << " are " << sum;
return 0;
}
