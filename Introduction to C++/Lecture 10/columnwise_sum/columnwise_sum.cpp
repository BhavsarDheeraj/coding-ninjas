#include <iostream>
using namespace std;

int main()
{
  int m, n = 0;
  cin >> m >> n;
  int arr[m][n];
  int sum[n];

  for (int i = 0; i < n; i++)
    sum[i] = 0;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
      sum[j] += arr[i][j];
    }
  }

  for (int i = 0; i < n; i++)
    cout << sum[i] << ' ';

  return 0;
}