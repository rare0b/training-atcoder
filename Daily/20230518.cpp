#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc148/tasks/abc148_e

int main() {
    ll N;
    cin >> N;
    if (N % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }
    // ll x = 1;
    // for (ll i = 2; i <= N; i += 2) {
    //     x *= i;
    // }
    // cout << x << endl;

    ll ans = N / 10;
    N /= 10;
    for (ll i = 5; i <= N; i *= 5) {
        ans += N / i;
    }
    cout << ans << endl;
}
