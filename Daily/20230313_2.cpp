#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (ll i = m; i < (ll)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/dp_a

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, 0, n) cin >> h[i];
    vector<int> dp(n);
    dp[0] = 0, dp[1] = abs(h[0] - h[1]);
    rep(i, 2, n) dp[i] =
        min(dp[i - 1] + abs(h[i - 1] - h[i]), dp[i - 2] + abs(h[i - 2] - h[i]));
    cout << dp[n - 1] << endl;
}