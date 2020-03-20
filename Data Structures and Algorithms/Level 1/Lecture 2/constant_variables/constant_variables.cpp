#include <iostream>
using namespace std;

void f(const int &j)
{
  //Cannot change the original value
}

int main()
{
  const int i = 10; //int const i = 10;
  int j = 12;
  const int &k = j;
  j++;
  const int &l = i;
  cout << j << endl;

  const int *p = &i;

  return 0;
}
