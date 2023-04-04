#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_s

int main() {
    int n, w;
    cin >> n >> w;
    vector<ll> ws(n), v(n);
    for (int i = 0; i < n; i++) cin >> ws[i] >> v[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, -1));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < w + 1; j++) {
            if (dp[i][j] == -1) continue;

            // if (i == 1) cout << ws[i] << v[i] << j + ws[i] << w << endl;
            dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
            if (j + ws[i] <= w) dp[i + 1][j + ws[i]] = dp[i][j] + v[i];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < w + 1; j++) {
            // cout << dp[i][j] << " ";
            if (ans < dp[i][j]) ans = dp[i][j];
        }
        // cout << endl;
    }

    cout << ans << endl;
}