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

  int const *p = &i; //p is a a pointer pointing to a constant integer. Although p is not a constant

  p = &j; //Valid 😅😅😅😅😅

  int *const q = &j; //q is a constant pointer pointing to an integer.

  int const *const p2 = &i; //p2 is a constant pointer pointing to a constant integer 😂😂😂😂😂😂😂😂

  return 0;
}
