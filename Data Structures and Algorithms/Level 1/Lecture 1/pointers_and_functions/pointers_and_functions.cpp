#include <iostream>
using namespace std;

void print(int *p)
{
  cout << *p << endl;
}

void incrementPointer(int *p)
{
  p++;
}

void increment(int *p)
{
  (*p)++;
}

int sum(int *arr, int size)
{
  cout << sizeof(arr) << endl;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
    // sum += *(arr + i);
  }

  return sum;
}

int main()
{
  int i = 10;
  int *p = &i;
  print(p);

  cout << p << endl;
  incrementPointer(p);
  cout << p << endl;

  cout << *p << endl;
  increment(p);
  cout << *p << endl;

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << sizeof(arr) << endl;
  cout << sum(arr, 10) << endl;

  return 0;
}