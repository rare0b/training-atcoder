#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cs

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int j = 1; j <= m; j++) {
        dp[0][j] = j;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] =
                    min({dp[i - 1][j - 1], dp[i - 1][j] + 1, dp[i][j - 1] + 1});
            } else {
                dp[i][j] = min(
                    {dp[i - 1][j - 1] + 1, dp[i - 1][j] + 1, dp[i][j - 1] + 1});
            }
        }
    }

    cout << dp[n][m] << endl;
}