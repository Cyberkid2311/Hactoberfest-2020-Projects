//Recursive (TLE Problem)

#include <bits/stdc++.h>
using namespace std;

int LCS(string a, string b, int n, int m)
{
	//Base
	if (n == 0 || m == 0)
		return 0;

	if (a[n - 1] == b[m - 1])
		return LCS(a, b, n - 1, m - 1) + 1;

	else
		return max(LCS(a, b, n - 1, m), LCS(a, b, n, m - 1));
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		int n, m;
		cin >> n >> m;
		cin >> a >> b;
		cout << LCS(a, b, n, m) << "\n";
	}
	return 0;
}