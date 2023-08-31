#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cl

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> cum(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    cum[1] = a[0];
    for (ll i = 1; i < n; i++) {
        cum[i + 1] = cum[i] + a[i];
    }

    vector<ll> r(n);
    for (ll i = 0; i < n; i++) {
        if (i == 0)
            r[i] = 0;
        else
            r[i] = r[i - 1];

        while (r[i] < n && cum[r[i] + 1] - cum[i] <= k) {
            r[i]++;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += r[i] - i;
    }

    cout << ans << endl;
}
