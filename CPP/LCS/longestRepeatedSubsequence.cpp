#include <bits/stdc++.h>
using namespace std;

int LCS(string a, string b, int n, int m)
{
  int T[n + 1][m + 1];
  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
        T[i][j] = 0;
      else if (a[i - 1] == b[j - 1] && i != j)
        T[i][j] = 1 + T[i - 1][j - 1];
      else
        T[i][j] = max(T[i - 1][j], T[i][j - 1]);
    }
  }
  return T[n][m];
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a;
    cin >> a;
    int n = a.length();
    cout << LCS(a, a, n, n) << "\n";
  }
  return 0;
}