#include <iostream>
using namespace std;

#define PI 3.14
#define MULTIPLY(a, b) a *b
#define SQUARE(x) x *x

int main()
{
  cout << PI << endl;
  cout << MULTIPLY(2 + 3, 3 + 5) << endl; // 2 + 3 * 3 + 5 => 2 + (3 * 3) + 5 => 16 😅

  int x = 36 / SQUARE(6); // 36 / 6 * 6 => 36 😅
  cout << x << endl;

  return 0;
}