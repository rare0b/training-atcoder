#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cr

int main() {
    ll N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(100001, -1));
    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 100001; j++) {
            if (dp[i][j] == -1) continue;
            if (dp[i + 1][j] != -1)
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            else
                dp[i + 1][j] = dp[i][j];
            if (dp[i][j] + w[i] <= W) dp[i + 1][j + v[i]] = dp[i][j] + w[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < 100001; i++)
        if (dp[N][i] > 0 && ans < i) ans = i;
    cout << ans << endl;
}