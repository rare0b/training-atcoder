#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc167/tasks/abc167_d

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    vector<vector<ll>> dp(61, vector<ll>(N));
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;
        dp[0][i] = A[i];
    }

    for (ll p = 0; p < 60; p++) {
        for (ll i = 0; i < N; i++) {
            dp[p + 1][i] = dp[p][dp[p][i]];
        }
    }

    // for (auto a : dp) {
    //     for (auto x : a) {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    ll ans = 0;
    for (ll p = 0; p < 61; p++) {
        if (K & (1LL << p)) ans = dp[p][ans];
    }

    cout << ans + 1 << endl;
}
