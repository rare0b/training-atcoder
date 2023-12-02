#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc003/tasks/agc003_b

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;

    ll ans = 0;
    ll card_count = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == 0) {
            ans += card_count / 2;
            card_count = 0;
        } else {
            card_count += a[i];
        }
    }
    ans += card_count / 2;

    cout << ans << endl;
}
