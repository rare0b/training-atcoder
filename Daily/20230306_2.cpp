#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/abc242/tasks/abc242_c

int main() {
    ll n;
    cin >> n;
    const ll div = 998244353;

    vector<vector<ll>> dp(n, vector<ll>(9, 0));
    for (ll j = 0; j < 9; j++) {
        dp[0][j] = 1;
    }
    for (ll i = 0; i < n - 1; i++) {
        for (ll j = 0; j < 9; j++) {
            dp[i][j] %= div;
            if (j != 0) {
                dp[i + 1][j - 1] += dp[i][j];
            }
            dp[i + 1][j] += dp[i][j];
            if (j != 8) {
                dp[i + 1][j + 1] += dp[i][j];
            }
        }
    }

    ll ans = 0;
    for (ll j = 0; j < 9; j++) {
        ans = (ans + dp[n - 1][j]) % div;
    }

    cout << ans << endl;
}