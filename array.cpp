// single dimensional array with random number generation
#include<iostream>
#include<cstdlib>
#inclue<ctime>

using namespace std;

int students[30];

for(int i = 0; i<30; i++)
{
  students[i] = rand() % 100;
  std::cout << students[i] << std::endl;
}
return 0;
}
