#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_t

int main() {
    string s, t;
    cin >> s >> t;
    int ssz = s.size(), tsz = t.size();
    vector<vector<int>> dp(ssz + 1, vector<int>(tsz + 1));

    for (int i = 0; i <= ssz; i++) {
        for (int j = 0; j <= tsz; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = 0;
            } else if (i == 0) {
                dp[i][j] = dp[i][j - 1];
            } else if (j == 0) {
                dp[i][j] = dp[i - 1][j];
            } else if (s[i - 1] == t[j - 1]) {
                dp[i][j] =
                    max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[ssz][tsz] << endl;
}