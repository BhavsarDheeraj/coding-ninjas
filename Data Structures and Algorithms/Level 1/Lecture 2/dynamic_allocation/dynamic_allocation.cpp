#include <iostream>
using namespace std;

int main()
{
  int *p = new int; //Heap memory
  *p = 10;
  cout << p << endl;
  cout << *p << endl;

  int *a = new int[50];

  //Proper approach to create n sized array
  int n;
  cin >> n;
  int *arr = new int[n];

  //VERY IMPORTANT TO DELETE
  delete p;
  delete[] a;
  delete[] arr;

  return 0;
}