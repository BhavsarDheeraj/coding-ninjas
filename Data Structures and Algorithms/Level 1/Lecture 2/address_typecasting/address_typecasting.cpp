#include <iostream>
using namespace std;

int main()
{
  int i = INT_MAX;

  int *p = &i;
  char *pc = (char *)p;

  char *str = "abc";
  int *x = (int *)str;

  cout << *x << endl;

  // cout << *p << endl;
  // cout << *pc << endl;

  // cout << *(pc + 1) << endl;
  // cout << *(pc + 2) << endl;
  // cout << *(pc + 3) << endl;

  return 0;
}