#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_m

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> r(n);

    for (ll i = 0; i < n; i++) {
        if (i == 0)
            r[i] = 0;
        else
            r[i] = r[i - 1];

        while (r[i] < n - 1 && a[r[i] + 1] - a[i] <= k) {
            r[i]++;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += r[i] - i;
    }

    cout << ans << endl;
}
