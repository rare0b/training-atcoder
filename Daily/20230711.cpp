#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc308/tasks/abc308_e

ll mex(ll i, ll j, ll k) {
    if (i != 0 && j != 0 && k != 0) return 0;
    if (i != 1 && j != 1 && k != 1) return 1;
    if (i != 2 && j != 2 && k != 2) return 2;
    return 3;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    const string MEX = "MEX";

    ll ans = 0;
    for (ll mi = 0; mi < 3; mi++) {
        for (ll ei = 0; ei < 3; ei++) {
            for (ll xi = 0; xi < 3; xi++) {
                vector<vector<ll>> dp(n + 1, vector<ll>(4, 0));
                vector<ll> mex_int{mi, ei, xi};
                for (ll i = 0; i <= n; i++) {
                    for (ll j = 0; j <= 3; j++) {
                        if (j == 0) {
                            dp[i][j] = 1;
                        } else if (i == 0) {
                            dp[i][j] = 0;
                        } else if (s[i - 1] == MEX[j - 1] &&
                                   a[i - 1] == mex_int[j - 1]) {
                            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
                        } else {
                            dp[i][j] = dp[i - 1][j];
                        }
                    }
                }
                ans += mex(mi, ei, xi) * dp[n][3];
            }
        }
    }

    cout << ans << endl;
}
