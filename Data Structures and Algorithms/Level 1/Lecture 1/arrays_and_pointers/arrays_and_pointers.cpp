#include <iostream>
using namespace std;

int main()
{
  int a[10];

  cout << a << endl;
  cout << &a[0] << endl; //which is equal to &a which is again equal to a

  a[0] = 5;
  a[2] = 9;

  cout << *a << endl;

  int *p = a;

  cout << *p << endl;

  cout << sizeof(p) << endl;
  cout << sizeof(a) << endl;

  // p++;

  // cout << *p << endl;

  //arr[i] => *(arr+i) => i[arr] => *(i+arr) 😅😅😅😅😅😅

  //Difference between arrays and pointers
  //1. sizeof
  //2. '&' operator
  //3. Array can't be reassigned and pointers can be

  return 0;
}