// DP unbounded Knapsack Problem(Coin Change-Minimum Number of Coins):-https://practice.geeksforgeeks.org/problems/number-of-coins1824/1


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


long long dp[1001][1001];
class Solution {

public:
    int minCoins(int coins[], int M, int V)
    {
        for (int i = 0; i <= M; i++) {
            for (int j = 0; j <= V; j++) {
                if (j == 0)
                    dp[i][j] = 0;
                else if (i == 0)
                    dp[i][j] = INT_MAX;
                else {
                    if (coins[i - 1] <= j)
                        dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[M][V] != INT_MAX)
            return dp[M][V];
        else
            return -1;

    }


};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends
