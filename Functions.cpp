//Program to print the function in C++

#include <iostream>
using namespace std;

void add (int a, int b)
{
  cout << "sum =" << (a+b);
}
 void add (float a, float b)
{
  cout << endl << "\sum =" <<(a+b);
}
  int main()
{
    add(10, 2.2);
    add(3, 2.5);

return 0;
}





