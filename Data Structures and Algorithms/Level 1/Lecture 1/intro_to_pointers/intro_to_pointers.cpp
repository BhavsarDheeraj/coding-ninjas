#include <iostream>
using namespace std;

int main()
{
  int i = 1000;
  cout << &i << endl; //Prints the address of i

  int *p = &i;

  cout << p << endl;         //Prints the address of i
  cout << &p << endl;        //Prints the address of p
  cout << *p << endl;        //Prints the value of i
  cout << sizeof(p) << endl; //Prints the size of p - The size of a pointer is always 8 Bytes

  int a = *p;
  a++;
  cout << *p << endl;
  cout << a << endl;

  int **b = &p;
  **b += 100;

  (*p)++;

  cout << i << endl;

  return 0;
}