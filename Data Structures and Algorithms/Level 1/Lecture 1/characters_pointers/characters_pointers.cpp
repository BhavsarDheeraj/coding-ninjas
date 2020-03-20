#include <iostream>
using namespace std;

int main()
{
  int a[] = {1, 2, 3};
  char c[] = "abcdef";

  cout << a << endl;
  cout << c << endl;
  cout << &c << endl;

  char *ch = &c[0];
  cout << ch << endl;

  char c1 = 'a';
  char *pc = &c1;

  cout << c1 << endl;
  cout << &c1 << endl;
  cout << pc << endl; //Will print as a chararcter until it gets a null value

  char str[] = "abcde"; //Temp to str
  char *pstr = "abcde"; //Pointer pointing to temp which is very harmful

  cout << str << endl;
  cout << pstr << endl;
  cout << &str << endl;
  cout << &pstr << endl;

  return 0;
}