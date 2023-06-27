#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc307/tasks/abc307_e

int main() {
    ll n, m;
    cin >> n >> m;
    const ll MOD = 998244353;
    vector<ll> dp_1(n, 0), dp_others(n, 0);
    dp_1[0] = m;

    for (int i = 1; i < n; i++) {
        dp_1[i] += dp_others[i - 1];
        dp_others[i] += dp_1[i - 1] * (m - 1);
        dp_others[i] += dp_others[i - 1] * (m - 2);

        dp_1[i] %= MOD;
        dp_others[i] %= MOD;
    }

    cout << dp_others[n - 1] << endl;
}
