#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ct

int n;
int dp[1009][1009];
string s;

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1])
            dp[i][i + 1] = 2;
        else
            dp[i][i + 1] = 1;
    }

    for (int len = 2; len <= n; len++) {
        for (int l = 0; l < n - len; l++) {
            int r = l + len;

            if (s[l] == s[r]) {
                dp[l][r] = max({dp[l][r - 1], dp[l + 1][r - 1] + 2});
            } else {
                dp[l][r] = max(dp[l][r - 1], dp[l + 1][r]);
            }
        }
    }

    cout << dp[0][n - 1] << endl;
}
