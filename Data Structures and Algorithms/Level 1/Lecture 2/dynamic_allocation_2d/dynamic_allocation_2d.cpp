#include <iostream>
using namespace std;

int main()
{
  //Create a 2d array of n rows and m columns
  int n, m;
  cin >> n >> m;

  int **p = new int *[n];

  for (int i = 0; i < n; i++)
  {
    p[i] = new int[m];
  }

  //Delete 2d array of n rows and m columns
  for (int i = 0; i < n; i++)
  {
    delete[] p[i];
  }
  delete[] p;

  return 0;
}