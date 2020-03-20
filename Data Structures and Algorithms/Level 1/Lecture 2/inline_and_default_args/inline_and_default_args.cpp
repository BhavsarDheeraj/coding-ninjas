#include <iostream>
using namespace std;

inline int max(int x, int y)
{
  return x > y ? x : y;
}

int sum(int arr[], int size, int startIndex = 0) //Default argument startIndex to 0
{
  int sum = 0;
  for (int i = startIndex; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int sum2(int a, int b, int c = 0, int d = 0) //sum2(1,2,3) => a -> 1, b -> 2, c -> 3, d -> 0
{
  return a + b + c + d;
}

int main()
{
  int a = 3, b = 7;
  cout << max(3, 7) << endl;

  int arr[20];
  for (int i = 0; i < 20; i++)
  {
    cin >> arr[i];
  }

  //Whole Array sum
  cout << sum(arr, 20) << endl;

  //Sum of last 10 elements
  cout << sum(arr, 20, 10) << endl;

  return 0;
}