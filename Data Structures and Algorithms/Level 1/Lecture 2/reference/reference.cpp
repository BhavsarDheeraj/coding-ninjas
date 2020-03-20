#include <iostream>
using namespace std;

void increment(int &n)
{
  n++;
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

//MARK:- VERY DANGEROUS
int &f(int n)
{
  int a = n;
  return a;
}

//MARK:- VERY DANGEROUS
int *f2()
{
  int i = 10;
  return &i;
}

int main()
{
  int i = 10;
  int &j = i;

  i++;
  cout << j << endl;
  j++;
  cout << i << endl;

  int k = 100;
  j = k;

  increment(j);

  cout << j << endl;
  cout << i << endl;

  int a = 5;
  int b = 10;

  cout << "Before swap: " << a << " " << b << endl;
  swap(a, b);
  cout << "After swap: " << a << " " << b << endl;

  int &m = f(a);

  int *p = f2();
  cout << *p << endl;

  return 0;
}